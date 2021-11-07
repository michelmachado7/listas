#include<stdio.h>
#include<stdlib.h>
/* */
incr(int *pa){
	(*pa)++;
}
int main ()
{
	int a;
	printf("Digite um numero: ");
	scanf("%d",&a);
	printf("Valor antes da chamada da funcao: %d",a);
	incr(&a);
	printf("\nValor incrementando com a funcao %d",a);
	
		


return 0;
}

