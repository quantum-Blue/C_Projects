#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


#define MAX 50
void bubblesort(char dizi[],int size){
    int i , j ;
    for ( i = 0; i < size; i++)
    {
        for ( j = 1; j < size-i; j++)
        {
            if(dizi[j] > dizi[j-1]){
                int temp = dizi[j];
                dizi[j]=dizi[j-1];
                dizi[j-1]=temp; 
            }
        }
        
    }
    
}

int main(){
    char dizin[MAX] ,size;
    printf("kac elemanli\n");
    scanf("%d",&size);

    int i ;
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&dizin[i]);
    }
    
    bubblesort(dizin,size);

    for ( i = 0; i < size; i++)
    {
        printf("%d ",dizin[i]);
    }
  
    return 0 ;
}
