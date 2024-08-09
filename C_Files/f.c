#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>



                //     ONLUK SAYIYI İKİLİK YAPMA


int iki(int x){
int i=0,k[20];
while (x>=1)
{
    i++;
    k[i]=x%2;
    x=x/2;
}
printf("\n ikilik tabandaki sayi karsiligi:");
for ( i = i; i > 0; i--)
printf(" %d ",k[i]);


}



int main(){
    int sayi  ;
    printf("sayi gir \n");
    scanf("%d",&sayi);
    iki(sayi);
    
    getchar();
    return 0 ;
}