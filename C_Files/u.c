#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int degis(int *a .int *b){
   int gecici =*a;
   *a=*b;
   *b=gecici;
}
int main()
{
   int x=2 ;
   int y = 3;
   printf("%d \t %d",x,y);
   degis();
   printf("%d \t %d",x,y);
   return 0 ;
}
