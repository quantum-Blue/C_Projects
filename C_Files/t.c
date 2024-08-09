#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


struct film
{
    char ad[50] ;
    int dakika ;
    char basrol[50] ;
    float imdb ;
};


struct film
{
    unsigned int yil;
    char* tur;
    unsigned int sure ;
    char* isim ;
};
typedef struct film Film ;


typedef int TAMSAYI ;

typedef struct
{
    unsigned int yil;
    char* tur;
    unsigned int sure ;
    char* isim ;
} Film ;


  void filmyazdir(Film);         
  void filmyazdirPtr(*Film);

int main(){

    int x , y ;
    printf("taban , us: \n");
    scanf("%d%d",&x,&y);
    int sonuc = pow(x,y);
    printf("%d",sonuc);
// üslü sayı formatı

  float a ;

    printf("sayi gir : \n");
    scanf("%f",&a);
    printf("%f",sqrt(a));

//yuvarlama  , ceil üste ,floor alta

    float a ,x,y;
    printf("sayi gir : \n");
    scanf("%f",&a);
    x=ceil(a);
    y=floor(a);
    printf("%f \t %f",x,y);

    char a[20] ;
    printf("sayi girin :");
    gets(a);
    printf("\n\n");
    puts(a);

//tams değişkeni int anlamına gelir
// typedef int tams;
 
    tams d1;
    tams d2;
    tams d3;
    d2=10;
    d1=20;
    d3=d1+d2;

    printf("%d",d3);


    struct film a = {"American Psycho",100,"Christan Bale",7.6} ;
    printf(" %s \t %d \t %s\t %.2f",a.ad , a.dakika , a.basrol , wa.imdb);


TAMSAYI sayi1=15;
printf("%d \n",sayi1);

Film film1;
film1.yil =1994;
film1.tur = "Drama" ;
film1.sure = 142  ;
film1.isim  = "The Shawshank Redemption" ;
printf("%s :\n%4d  %4d  Dakika : %s \n",film1.isim,film1.yil,film1.sure,film1.tur );

Film film2 = {1972,"Crime", 152,"The Godfather"}; //Başlangıç değeri atama
printf("%s :\n%4d  %4d  Dakika : %s \n",film2.isim,film2.yil,film2.sure,film2.tur );

Film film3 ={2008,"Action"} ; //az başlangıç değerli hali
printf("%s :\n%4d  %4d  Dakika : %s \n",film3.isim,film3.yil,film3.sure,film3.tur );


Film* =film4;
film4 =(Film*) malloc(sizeof(Film)); // structta yer ayırdık
(*Film).tur = "Crime";
(*Film).isim = "Pulp Fiction";
(*Film).yil = 1994;
(*Film).sure = 154;

printf("Film 1 hafizadaki adresi : %p \n",&film1);
filmyazdir(film1);

printf("Film 2 hafizadaki adresi : %p \n",&film2);
filmyazdir(film2);

printf("Film 3 hafizadaki adresi : %p \n",&film3);
filmyazdir(film3);

printf("Film 4 hafizadaki adresi : %p \n",&(*film4);
filmyazdirPtr(film4);

void filmyazdir(Film film){
    printf("Filmin hafizadaki adresi : &p\n",&film);
    printf("%-9d %-12s %-12d %-s \n\n",film.yil ,film.tur,film.sure,film.isim);
}

void filmyazdirPtr(Film* film){
    printf("Filmin hafizadaki adresi : &p\n",&(*film);
    printf("%-9d %-12s %-12d %-s \n\n",film->yil ,film->tur,film->sure,film->isim);
} 


