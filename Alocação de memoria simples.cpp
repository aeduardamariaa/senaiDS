/*Faça um programa que leia o tamanho de um vetor de inteiros e reserve
dinamicamente memoria para esse ´ vetor. Em seguida, leia os elementos
desse vetor, imprima o vetor lido e mostre o resultado da soma dos numeros
ímpares presentes no vetor*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int tamanho, *vetor, soma = 0;
	
	printf("Insira o tamanho do vetor:");
	scanf("%i", &tamanho);
	
	vetor = (int *)malloc(tamanho * sizeof(int)); 
	
	for(int i = 0; i < tamanho; i++)
	{
		printf("> ");
		scanf("%d", &vetor[i]);
	}
	
	for(int i = 0; i < tamanho; i++)
	{
		printf("[ %i ]", vetor[i]);
		
		if (vetor[i] % 2 != 0) {
            soma += vetor[i];
        }
	}
	
	printf("\n\nA soma dos ímpares eh %d", soma);
}
