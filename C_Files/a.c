#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main(){

FILE * filep=fopen("dosya.txt","a+");
char text[255];

if (filep==NULL)
{
    printf("Elimizde yok");
}

else
{
    printf("Bir sey yazin: \n");
    fgets(text,255,stdin);
    // scanf in dosyada kullanilan hali kullanimi :
    // (girilecek mesaj,boyutu,kullanım şekli)
    fputs(text,filep);
    // dosyada yazanı terminale basar
    printf("Dosyaya yazildi.\n");
    fclose(filep);
}

    return 0 ;
}
