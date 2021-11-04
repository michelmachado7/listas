/*Escreva uma função que leia uma string de caracteres e imprima os caracteres invertidos.
 Por exemplo, se a string lida for "xarope" deve imprimir "eporax"*/

#include<stdio.h>

int invert(){
	char a[50]; //vetor de 50 caracteres
	int i,j;
	gets(a); //lê os caracteres
	for(i=0;a[i]!='\0';i++); 
	for(j=i-1;j>=0;j--){
		printf("%c",a[j]); // inverte a ordem dos caracteres digitados
	}	
}

int main ()
	{
		invert(); //chamada da função sem parametros
		return 0;
	}

