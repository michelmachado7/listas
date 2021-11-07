/*Escreva uma função que dados dois arrays A e B mostre quais os elementos de A existem em B.
 Atenção: os arrays A e B devem ser passados como parâmetros para a função*/

#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int same(int*pa,int*pb){
	int i,j,ac[5],c,d,stop;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			stop=0;
			for(d=0;d<c;d++){
				if(pa[i]==ac[d]){
					stop=1;
				}
			}
			if((pa[i]==pb[j])&&(stop==0)){
				ac[c]=pa[i];
				c++;	
			}
		}
	}

for(i=0;i<c;i++){
	printf("%d|",ac[i]);
}
}
int main ()
{
	int A[5],B[5],i,j;
	for(i=0,j=0;i<5,j<5;i++,j++){
		printf("A[%d]:",i+1);
		scanf("%d",&A[i]);
		printf("\n");
		printf("B[%d]:",j+1);
		scanf("%d",&B[i]);
		printf("\n");	
	}
	same(A,B);
	return 0;
}

