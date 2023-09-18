/*1 - Faça um jogo da forca em linguagem C onde o usuário consiga adivinhar
a palavra com o número máximo de tentavas sendo 6. O programa deve ser
feito todo baseado em funções.*/

#include <stdio.h>

void testaPalpite(char palpite){

    int vida = 6;
    char palavra[6] = "banana";
    char palavraMontada[6] = "______";

    while (vida != 0)
    {  
        for(int i=0; i<=5; i++){
            if (palpite == palavra[i])
            {
                palavraMontada[i] = palpite;

            } 
        }
        for(int j = 0; j<=5; j++){
            printf("%c", palavraMontada[j]);
        }

        vida = vida - 1;

        printf("\nQual seu primeiro palpite: \n");
        scanf(" %c", &palpite);
        
    }
}

int main(){

    
    char palpite;
    
    printf("\nQual seu primeiro palpite: \n");
    scanf(" %c", &palpite);

    testaPalpite(palpite);

    return 0;
}

