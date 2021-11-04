/*Escreva um programa que simule o lançamento de uma moeda. 
Para cada lançamento de moeda o programa deve imprimir CARA ou COROA.
 Deixe o programa lançar 100 moedas e conte o número de vezes que cada lado aparece.
  Imprima os resultados. O programa deve chamar uma função separada
 chamada jogada que não utiliza argumentos e retorna 0 para cara e 1 para coroa.*/

#include<stdio.h>
#include <time.h>
int coinflip(){  //chamada de função de cara ou coroa
	int n,i, heads=0,tails=0;
	srand(time(NULL)); //gerador de numeros randomicos
	for(i=0;i<100;i++){
		n=rand()%2;
		if(n==1){
			heads++;
			printf("Coroa\n");
		}
		else
		if(n==0){
			printf("Cara\n");
			tails++;
		}
	}
	printf("\n	   CARA|COROA\n	    %d | %d",heads, tails);
}
int main ()
{	
	coinflip();
	return 0;
}

