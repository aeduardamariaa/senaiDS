/*Faça um programa que some todos os números naturais até o valor inserido
pelo usuário*/

#include <stdio.h>

int main(){
	int valor,soma,i;
	
	printf("Informe um valor: ");
	scanf("%i", &valor);
	
	for(i=1; i<=valor;i++){
		soma = i + soma;
	}
	printf("\nA soma é: %i", soma);
}
