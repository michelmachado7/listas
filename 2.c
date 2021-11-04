/*Escreva uma função que retorne o menor número entre dois números ponto flutuante fornecidos pelo usuário */

#include<stdio.h>

float function(float a,float b){ //função que vai achar o menor número entre os dois pontos flutuante fornecidos
	if(a<b)  
		return a; //se o primeiro numero for menor que o segundo, retorna o primeiro
	
	else
	return b; //se o segundo numero for menor que o primeiro retorna o segundo
}
int main ()
{
	float n1,n2;
	
	scanf("%f %f",&n1,&n2);
	printf(" \n%.2f",function(n1,n2)); //chamada da função direito no printf

return 0;
}
