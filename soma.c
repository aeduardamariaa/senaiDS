#include <stdio.h>
#define TAMANHO 3

void preencheArray(int array[]){
    int num = 0;
    
    for(int i = 0; i < TAMANHO; i++){
        printf("Insira um valor: ");
        scanf("%d", &num);
        array[i] = num;
    }
}

void mostraArray(int array[]){
    for( int i = 0; i < TAMANHO; i++){
        printf(" %d |", array[i]);
    }
}

int somaVetores(int array[], int index)
{
    if (index < 0)
    {
        return 0;
    }
    else
    {
        return array[index] + somaVetores(array, index - 1); 
    }
    
}

int main() {
    int array[TAMANHO];
    int index = TAMANHO - 1;
    
    preencheArray(array);
    mostraArray(array);

    printf("Resultado: %d\n", somaVetores(array, index));

    return 0;
}