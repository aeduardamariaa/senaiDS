#include <stdio.h>
#include <stdlib.h>

void setores(){

	printf("********SETORES********\n\n");
	printf("1 - LIMPEZA\n");
	printf("2 - PADARIA\n");
	printf("3 - AÇOUGUE\n");
	printf("4 - FRUTARIA\n");
	printf("0 - SAIR\n");
}

void limpeza(){
	printf("a - Detergente R$ 2.49 \n");
	printf("b - Sabonete R$ 3.19\n");
	printf("c - Shampoo R$ 18.60\n");
	printf("d - Condicionador R$ 16.60\n");
}

void padaria(){
	printf("e - Pão R$ 7.10\n");
	printf("f - Cueca virada R$ 5.46\n");
}

void acougue(){
	printf("g - Picanha R$ 38.60\n");
	printf("h - Linguiça R$ 18.60\n");
}

void frutaria(){
	printf("i - Melancia R$ 8.60\n");
	printf("j - Uva R$ 12.49\n");
	printf("k - Laranja R$ 3.59\n");	
}

int main(){
	
	int op = 0, cont = 0;
	char item;
	
	setores(); 

	printf("\nQual setor deseja visualizar: ");
	scanf("%d", &op);
	

	if (op == 0){
		exit(1);
	}else if (op == 1){
		limpeza();
		printf("\n\nO que você deseja comprar?\n");
		scanf("%c", &item);
	}else if(op == 2){
		padaria();
	}else if (op == 3){
		acougue();
	}else if(op == 4){
		frutaria();
	}else{
		printf("Entrada inválida");
	}
	
}
