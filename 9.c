/*Criar uma função que receba como parâmetro o ano e retorne 1 se ele for
 bissexto e 0 se não for bissexto.
A função main deve mostrar a mensagem apropriada.
Dicas: Um ano é bissexto se for divisivel por 400.
Um ano também é bissexto se for divisivel por 4.
Assim o ano 2000 foi bissexto (2000 / 400 = 5).
 Já o ano 1900 não foi bissexto (1900 / 400 = 4 e resto 3) 
 pois 1900 não é divisivel por 400*/

#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int bis(int *ano){	
	if((*ano%4==0)&&(*ano%400==0)){
		return 1;
	}
	else
	return 0;
}
int main ()
{
	int a;
	int ws;
	
	scanf("%d",&a);
	ws=bis(&a);
	if(ws==1){
		printf("Ano bissexto");
	}
	else
	printf("Ano nao bissexto");
	

	return 0;
}

