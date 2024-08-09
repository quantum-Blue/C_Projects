#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


            //   FAKTORYEL 


void fakt(int x){
int fact=1 , i ;
for ( i = 0; i < x; i++)
{
    fact*=(x-i);
}
    printf("%d \n",fact);
}

int main(){
    int  n;
    printf("sayi gir\n");
    scanf("%d",&n);

fakt(n);
    
    return 0 ;
}


/*
void fakt(){
int fact , temp , i;
fact=0;
temp=1;
printf("1\n");
for(i=0;i<6;i++){
    fact+=temp;
    temp = fact;
    printf("%d\n",fact);
}
}

int main(){
fakt();

}
*/