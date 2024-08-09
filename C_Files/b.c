#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main(){

char veri[25]="Hello World";
int uzunluk=strlen(veri);
// strlen : verinin uzunluğunu verir
int i;

FILE *filep = fopen("deneme.txt","w+");
// Dosya pointer ı olustuyoruz.
// Dosyamızın adını ve hangi formatla çağıracağımızı seçiyoruz.
if(filep==NULL){     
// gercekten açılıp açılmadığını kontrol ediyoruz.
    printf("Elimizde yok");
}
else{
    for ( i = 0; i < uzunluk; i++)
    {
        fputc(veri[i],filep);
        printf("Yazilan karakter: %c\n",veri[i]);
    }
    printf("Dosya basariyla yazdirildi");
    fclose(filep);
    // dosyayı en son kapatıyoruz olası hataları engellemek için
}
    return 0;
}