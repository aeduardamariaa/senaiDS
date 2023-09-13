/* 9) Calcular a média de N valores inseridos pelo usuário..*/ 

#include <stdio.h>

int main(){
	int valores, valor, i;
	float soma=0, media = 0;
	
	printf("Quanto valores você deseja inserir: ");
	scanf("%i", &valores);
	
	
	for(i=1;i<=valores;i++){
		printf("Qual o valor %i: ", i);
		scanf("%i", &valor);
		
		soma = soma + valor;
	}
	media = (soma/valores);
	
	printf("\nA média dos valores inseridos é: %.2f", media);
	return 0;
}
