/*Elaborar uma função para ler a base e a altura de um retângulo,
 calcular e retornar a sua área. Na função principal
 é apresentado o valor dessa área.
 Fórmula: Area = base * altura*/

#include<stdio.h>

float tri(){
	float b,h,f;
	
	scanf("%f",&b);
	
	scanf("%f",&h);
	return b*h;
}
int main ()
{
	printf("%.2f",tri());
	return 0;
}

