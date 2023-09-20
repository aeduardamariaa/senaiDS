/*7) Contar quantos dígitos tem um número inteiro positivo.*///

#include <stdio.h> 

int main(){
    char num[10];
    int tam = 0;

    printf("Informe o número:");
    scanf(" %s", num);

    for(int i=0 ; i <= 8 ; i++){

        if (num[i] == '\0'){
            break;
        }else{
            tam++;

        }
    }

    printf("\n%i", tam);
}
