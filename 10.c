/*Fazer um programa que leia um valor e chame uma função para dizer se o número é primo ou não.
 O programa deverá ser finalizado quando o valor 0 (zero) for digitado.
 Garanta que o número lido é positivo ou zero.*/

#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int prime(int *n){
	int prim=0,i;
	for (i = 1;i<=*n;i++){
		if((*n%i==0)&&(*n>0)){
			prim++;
		}
	}
	if(prim==2){
		printf("%dprime and positive number\n\n",*n);
	}
	else
	printf("%d Not prime but positive number\n",*n);
}
int main ()
{
	int nume;
	do{
	
		scanf("%d",&nume);
		if(nume>=0){
			prime(&nume);
		}
		else
		printf("%dnegative number",nume);
	}while(nume!=0);
	return 0;
}

