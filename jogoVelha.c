/*Desafio: Iniciar um jogo da velha em linguagem C. (não existe apenas uma
maneira correta de fazer, isso é bem aberto as suas ideias).*/

#include <stdio.h>

int main(void)
{
    char mat[3][3] = { {'.', '.', '.'}, {'.', '.', '.'}, {'.', '.', '.'} };

    for (int i = 0; i < 3; i++)
    {
        printf("\n");

        for (int j = 0; j < 3; j++)
        {
            printf("[ %c ]", mat[i][j]);
        }
        
    }


}
