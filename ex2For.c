/*Fa�a um programa que some todos os n�meros naturais at� o valor inserido
pelo usu�rio*/

#include <stdio.h>

int main(){
	int valor,soma,i;
	
	printf("Informe um valor: ");
	scanf("%i", &valor);
	
	for(i=1; i<=valor;i++){
		soma = i + soma;
	}
	printf("\nA soma �: %i", soma);
}
