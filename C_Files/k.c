#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


//                          BÜYÜK KÜÇÜK HARFLERİN SAYISINI BULMA



char cumle[100];

int i=0,s=0,b=0,k=0;

int main(void){

    printf("Cümlenizi girin (En fazla 100 karakter) :\n");
    gets(cumle);

    s=strlen(cumle);
    for(;i<s;i++){
        if(islower(cumle[i])) k++;
        else if(isupper(cumle[i])) b++;
    }

    printf("Sonuç \nBüyük Harf : %d adet\nKüçük Harf : %d adet\n",b,k);

    return 0;
}
