/*Criar uma função que converta uma temperatura dada em Fahrenheit em Celsius.
 A temperatura é passada como parâmetro para uma função
que retorna a temperatura em Celsius, que deve ser mostrada no programa principal.
 A fórmula para cálculo é C = ( F - 32 ) * 5 / 9*/

#include<stdio.h>
#include<stdlib.h>
float convert(float *f){
	float e=5.0/9.0;
	float j=*f,c=(j-32.0)*e;
	return c;
}

int main ()
{
	float temp;
	
	scanf("%f",&temp);
	printf("%.2f",convert(&temp));
	return 0;
}

