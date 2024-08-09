#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main(){
    int sayi ,kalan,a,b,d,c;
    printf("2lik birim sistemdeki bir sayi girin\n");
    scanf("%d",&sayi);
    
        a= sayi %10 * 2;
        b=((sayi%100)/10) *4;
        c= ((sayi%100)/100)  *8;
        d=sayi /1000 * 16;
        kalan=a+b+c+d;
    printf("%d",kalan);
    return 0 ;
}