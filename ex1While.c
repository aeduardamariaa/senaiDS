/*1) Faça um programa para adivinhar um número entre 1 e 1000. Este valor pode
ser definido automaticamente, ou randomizado utilizando uma função rand.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int certo, palpite=-1;

    srand(time(NULL));

	certo = rand() % 1000;

    while (palpite != certo)
    {
        printf("\nQual seu palpite?");
        scanf("%i", &palpite);

        if (palpite == certo)
        {
            printf("\n\nVocê acertou, o número era: %d", certo);
        }
        
    }
}

