/*1) Fa�a um programa que imprima todos os n�meros pares at� o valor que foi
inserido pelo usu�rio.*/

#include <stdio.h>

int main(){
	
	int valor, i;
	
	printf("Insira um valor: ");
	scanf("%i", &valor);
	
	for(i=1;i<=valor;i++){
		if (i % 2 == 0){
			printf("\n%i", i);
		}
	}
}
