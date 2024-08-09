#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>



//                      CÜMLEDE KAÇ HARF OLDUĞUNU BULMA

int ara(char kelime[30], char karakter[1]);

int main(){
	char kelime[30];
	char karakter[1];
	printf("Bir kelime giriniz: "); fgets(kelime,30,stdin);
	printf("Bir karakter giriniz: "); scanf("%s", karakter);
	printf("%s karakteri %d kere geçmektedir.", karakter, ara(kelime,karakter)); 
	return 0;
}

int ara(char kelime[30],char karakter[1]){
	int sayac=0;

	for(int i=0; i<=30; i++){
		if(kelime[i]==karakter[0]){
			sayac++;
		}
	} 
    return sayac;
}

