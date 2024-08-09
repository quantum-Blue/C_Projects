#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main(){
    unsigned int i;
    for ( i = 1; i <=20 ; ++i)
    {
        printf( "%10d " , 1+(rand() % 6 ));
        if (i%5 ==0)
        {
            puts("");
        }
        
    }
    
    
    return 0 ;
}