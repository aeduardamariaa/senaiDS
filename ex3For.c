/*Faça um programa que exiba uma tabela com a tabuada de um valor inserido
pelo usuário.*/

#include <stdio.h>

int main(){
	int valor, i;
	
	printf("Informe um valor para ver a tabuada:");
	scanf("%i", &valor);
	
	for(i=1; i<=10; i++){
		printf("\n%i X %i = %i", valor, i, (valor*i));		
	}
}
