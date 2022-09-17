/*
utility for get size of file
example:
fsize filename OPTION
option is must
B = shows size in byte
K = kilobyte
M = megabyte
G = gigabyte

*/

#include <stdio.h>
#include <stdlib.h>


#define len(x)(sizeof(x)/sizeof(x[0]))

typedef struct{

 char n;
 double div_val;

}COMP;

COMP comp[4];

static inline void comp_init(void)
{
 
 comp[0] = (COMP){.n = 'B' , .div_val = 1};
 comp[1] = (COMP){.n = 'K' , .div_val = 1024};
 comp[2] = (COMP){.n = 'M' , .div_val = 1024*1024};
 comp[3] = (COMP){.n = 'G' , .div_val = 1024*1024*1024};

}


int main(int argc , char **argv)
{

 

 if(argc < 2)
 {
    fprintf(stderr,"type a file name \n");
    exit(1);
 }

 FILE *fp; 
 long fl;

fp = fopen(argv[1], "rb"); 
if(!fp)
{
    fprintf(stderr,"can not open file\n");
    exit(1);
}
fseek(fp, 0, SEEK_END);          
fl = ftell(fp);              
fclose(fp);


 comp_init();

 int sz = len(comp);
 char c = *(*(argv+2));
 for(int i=0;i<sz;i++)
 {

  if(c == comp[i].n)
  {

  printf("%lf\n",(double)fl/comp[i].div_val);
   return 0;

  }

 }



}