#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


struct zaman{
	int dk;
	int sa;
	int sn;	
};

void artzaman(int d,int *a,int *b,int *c){
	FILE *p1;	
	p1=fopen("artmiszaman.txt","a");
	if(*a>24 || *b>=60 || *c>=60){
		
		printf("\n%d. satirda yanlis saat formati girilmistir bu yuzden atlanacaktir.\n",d);		
	}
	else{
	*c +=1;
	if(*c==60){
		*b +=1;
		*c = 0;
		if(*b==60){
		*a +=1;
		*b=0;
		if(*a>24){
		*a=1;
        
	}
	}
	}
	
	if(*a>24){
		*a=1;
	}

fprintf(p1,"%d.%d.%d\n",*a,*b,*c);
}

fclose(p1);
}

int main(){
	struct zaman a[20];
	int i,k=1;
	FILE *p;
	FILE *p1;
	p1=fopen("artmiszaman.txt","w");
	fclose(p1);
	p=fopen("zaman.txt","w");
	
	printf("zamanlari giriniz\n");
	for(i=0;i<20;i++){
		printf("dk:");
		scanf("%d",&a[i].dk);
		printf("sa:");
		scanf("%d",&a[i].sa);
		printf("sn:");
		scanf("%d",&a[i].sn);
	}
	for(i=0;i<20;i++){
		fprintf(p,"%d:%d:%d\n",a[i].sa,a[i].dk,a[i].sn);
		artzaman(k,&a[i].sa,&a[i].dk,&a[i].sn);
		++k;
	}
	fclose(p);
	return 0;
}