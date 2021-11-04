/*Escreva um programa que faça o jogador "adivinhar um número" da forma como segue:
 Seu programa escolhe um número para ser adivinhado selecionando um inteiro entre 0 e 50. O programa então escreve:
Tenho um número de 0 a 50
Voce pode adivinhar meu número ?
Por favor digite seu palpite
O jogador digita então o primeiro palpite. O programa fornece uma das seguintes respostas:
1 - Excelente! Voce adivinhou o número
2 - Muito baixo. Tente novamente
3- Muito alto. Tente novamente
Se o palpite do jogar estive errado o programa deve fazer um loop até que o jogador acerte o número.
 Seu programa deve continuar dizendo muito alto ou muito baixo para ajudar o jogador a chegar a uma resposta.
 Obrigatoriamente voce deve utilizar funções.*/

#include<stdio.h>
#include <time.h>

int find(){
	int a;
    srand(time(NULL)); //gerando numero aleatorio
	a=rand()%51;
	
	return a;
}
	find_2(){
	int c,j=0;
	do{
		scanf("%d",&c);
		if(c==a){
			printf("Excelente! Voce adivinhou o numero ");
			j=1;
		}
		if(c<a){
			printf("Muito baixo. Tente novamente ");
		}
		if(c>a){
			printf("Muito alto. Tente novamente ");
		}
	}while(j=1);
}

int main()
{
    
	int resposta = find();
	find_2();
    
	return 0;
}

