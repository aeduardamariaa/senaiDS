/* 9) Calcular a m�dia de N valores inseridos pelo usu�rio..*/ 

#include <stdio.h>

int main(){
	int valores, valor, i;
	float soma=0, media = 0;
	
	printf("Quanto valores voc� deseja inserir: ");
	scanf("%i", &valores);
	
	
	for(i=1;i<=valores;i++){
		printf("Qual o valor %i: ", i);
		scanf("%i", &valor);
		
		soma = soma + valor;
	}
	media = (soma/valores);
	
	printf("\nA m�dia dos valores inseridos �: %.2f", media);
	return 0;
}
