#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


struct kisi {
    char ad[50];
    char bolum[60];
    int no;
    float maas;
    
};

int main(){
    struct kisi a;
    printf("kisinin adi :\n");
    scanf("%s",a.ad);
    
    printf("kisinin bolumu :\n");
    scanf("%s",a.bolum);
    
    printf("ogrencinin no'su :\n");
    scanf("%d",a.no);
    
    printf("kisinin maasi :\n");
    scanf("%f",a.maas);
    
    
    if(a.no == 0){
        printf("%s %s departmanında calisarak %.2f tl maas almaktadir\n",a.ad,a.bolum,a.maas );
    }
                                                                                        
    if(a.maas == 0){
        printf("%s bir ogrencidir okul numarası %d'dir ve %s bölümünde okumaktadir",a.ad,a.no,a.bolum );
    }
    
    return 0 ;
}
