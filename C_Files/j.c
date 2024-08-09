#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


void useLocal();
void useStaticLocal();
void useGlobal();

int x =1; //global
int main(){
int x = 5;  //Yerel
printf("local x : %d ", x) ;
{
    int x =7;
    printf("scope x : %d",x);
}
printf("local x : %d ", x) ;


useLocal();             //otomatik yerel x i var
useStaticLocal();       //static yerel x i var    
useGlobal();            //genel x i kullanır
useLocal();             //otomatik yerel x i var , tekrar başlangıç değeri verir
useStaticLocal();       //static yerel x i var  ,  aynını korur    
useGlobal();            //genel x i kullanır  ,  aynını korur


return 0 ;
}

void useLocal(){
    int x =25;
    printf("local x : %d ", x) ;
    ++x;
    printf("local x : %d ", x) ;
}

void useStaticLocal(){
    static int x = 50;
    printf("local x : %d ", x) ;
    ++x;
    printf("local x : %d ", x) ;
}

void useGlobal(){
printf("local x : %d ", x) ;
x *=10;
printf("local x : %d ", x) ;
}