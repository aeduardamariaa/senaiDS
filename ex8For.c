/*Encontrar e exibir todos os n�meros primos entre 1 e 100.*/

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
			printf("\n%i � primo!", j);
		}
	}
	return 0;
}
