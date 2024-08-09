#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main(){
    int sayi ,ters =0,kalan;
    
    printf("sayi gir \n");
    scanf("%d",&sayi);
    while ( sayi > 0)
    {
        kalan = sayi % 10;
        ters = ters * 10 + kalan;
        sayi = sayi / 10 ;
    }
    printf("sayinin tersi : %d\n",ters);
    
    return 0 ;
}