#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main(){
    
    unsigned int row =10 , column;
    while (row>=1)
    {
        column=1;
        while (column <=10)
        {

            
            printf( "%s" ,row %2 ? "<" : ">"  );
            ++column;
        }
        
        --row;
    }
    
    // printf("%d",INT_MIN);
    return 0 ;
}