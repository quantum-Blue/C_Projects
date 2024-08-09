#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


//                              TAU SAYISI BULAN KOD



void tauMu(int sayi);

int tamSayiBolenler(int sayi) {
    int sayac=0;
   
    for (int i = 1; i <= sayi; i++) {
        if (sayi % i == 0) {
            printf("%d ", i);
            sayac++;
        }
    }
     printf("\n %d sayisinin tam sayi bolenleri: %d adet.", sayi, sayac);
    return sayac;
}


int main() {
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    tamSayiBolenler(sayi);
    tauMu(sayi);

    return 0;
}


void tauMu(int sayi){

    if(sayi % tamSayiBolenler(sayi) ==0){
        printf("\n %d sayisi tau sayisi", sayi);

    }else {
        printf("\n %d sayisi tau degil", sayi);
    }
}
