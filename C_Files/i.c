#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main(){
    
unsigned int i , seed ;
printf(" %s" ," Enter seed : " );
scanf("%u " , &seed );

srand(seed);
for ( i = 1; i <= 20; ++i)
{
    printf(" %10d " , 1 + (rand() %4 ) );
}
if (i%4==0)
{
    puts("");
}

    return 0 ;
}