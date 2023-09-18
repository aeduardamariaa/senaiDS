/*1 - Faça um jogo da forca em linguagem C onde o usuário consiga adivinhar
a palavra com o número máximo de tentavas sendo 6. O programa deve ser
feito todo baseado em funções.*/

/*===============================FORCA===============================*/

#include <stdio.h>
#include <stdbool.h>

int vida = 6;
char palavra[6] = "banana";
char palavraMontada[6] = "______";


void imprime(){

    for (int j = 0; j <= 5; j++){

            printf("%c", palavraMontada[j]);
    }

}


void testaPalpite(char palpite)
{
    while (vida != 0)
    {
        bool var = false;
        bool acertou = true;

        printf("\nQual seu primeiro palpite: \n");
        scanf(" %c", &palpite);

        for (int i = 0; i <= 5; i++){
            if (palpite == palavra[i])
            {
                palavraMontada[i] = palpite;
                var = true;
            }
        }

        if (var == false){
            vida = vida - 1;
        }
        printf("Você tem %i vidas!\n", vida);

        imprime();

        for (int i = 0; i <= 5; i++){

            if (palavraMontada[i] != palavra[i])
            {
                acertou = false;
                break;
            }
        }

        if (acertou == true){

            printf("\nGanhou!");
            break;
        }
    }
    printf("\nAcabou sua vida!");
}


int main()
{
    char palpite;

    testaPalpite(palpite);

    return 0;
}

