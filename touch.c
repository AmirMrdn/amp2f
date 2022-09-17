
/*
simple creating file program
touch a b c
*/
#include <stdio.h>
#include <stdlib.h>


int main(int argc,char *argv[]){

  if(argc < 1){	
	fprintf(stderr,"Too few argument");
	exit(1);
 }
 
  FILE *fp = fopen(argv[1],"w");
  if(!fp)
  fprintf(stderr,"first failed");
  fclose(fp);

   if(argc >1 ){
	   
	   for(int i=2;i<argc;i++){
		   
		   FILE *Fp = fopen(argv[i],"w");
		   if(!Fp)fprintf(stderr,"failed no %d",i);
		   fclose(Fp);
	   }
	   
	   
   }


 return 0;
}