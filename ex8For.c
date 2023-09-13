/*Encontrar e exibir todos os números primos entre 1 e 100.*/

#include <stdio.h>

int main(){
	
	int i=1, j, cont=0;

	for(j=1;j<=100; j++){
		cont = 0;
		for(i=2;i<=100; i++){
			if (j % i == 0){
				cont = cont + 1;
			}	
		}
		if (cont < 2){
			printf("\n%i é primo!", j);
		}
	}
	return 0;
}
