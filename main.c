#include <stdio.h>

#define len(x)(sizeof(x)/sizeof(x[0]))

char src[] = "ab ";//1 byte more for NULL

int main()
{

int sz = len(src)-1;

printf("sz value = %d\n\n",sz);

char a[2];




}