/*Faça um programa que leia duas strings
e utilize uma função para determinar qual das duas strings possui o maior tamanho*/

#include<stdio.h>
#include<stdlib.h>
#include <time.h>

 char String(char *a, char *b){
	int i,j;
	for(i=0;a[i]!='\0';i++);
	for(j=0;b[j]!='\0';j++);
	if(i>j){
		printf(" %s",a);
	}
	else
	printf("%s",b);

}

int main (){
	char a[50],b[50];
	gets(a);
	gets(b);
	maiorString(a,b);
	return 0;
}

