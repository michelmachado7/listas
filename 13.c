/*Faça uma função que inverta dois valores passados como parâmetros para a função.
 Mostre os valores invertidos antes e após a chamada da função
Você deve passar os valores por referência*/

#include<stdio.h>
#include<stdlib.h>

invert(int *pa,int *pb){
	int aux = *pa;
	*pa=*pb;
	*pb=aux;
}
int main ()
{
	int a,b;
	
	scanf("%d %d",&a,&b);
	printf("%d  %d",a,b);
	invert(&a,&b);
	printf("\n %d  %d",a,b);
	

return 0;
}

