/* Escreva um c�digo onde ser� identificado os n�meros primos at� o valor
inserido pelo usu�rio.*/

#include <stdio.h>

int main(){
	int valor, i=1, j, cont=0;
	
	printf("Insira um valor: ");
	scanf("%i", &valor);
	
	for(j=2;j<=valor; j++){
		cont = 0;
		for(i=2;i<=valor; i++){
			if (j % i == 0){
				cont = cont + 1;
			}	
		}
		if (cont < 2){
			printf("\n%i � primo!", j);
		}
	}
	return 0;
}


