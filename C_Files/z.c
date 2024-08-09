#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main(){
    int sayi ;
    unsigned int a=1;
    while (a <=10)
    {
        puts(a % 2 ? "****" : "++++++++");
        ++a;
    }
    
    
    
    return 0 ;
}