/*Desafio: Iniciar um jogo da velha em linguagem C. (não existe apenas uma
maneira correta de fazer, isso é bem aberto as suas ideias).*/

#include <stdio.h>

void imprimeTabuleiro(char * arr)
{
    for (int i = 0; i < 3; i++)
    {
        printf("\n");

        for (int j = 0; j < 3; j++)
        {
            printf("[ %c ]",*(arr + i * 3 + j));
        }
    }
}

void pedirLocal(int * linha, int * coluna)
{
    printf("\n\nQual linha deseja inserir: ");
    scanf("%d", linha);

    printf("\nEm qual coluna deseja inserir: ");
    scanf("%d", coluna);
}

int main(void)
{
    char mat[3][3] = { {'.', '.', '.'}, {'.', '.', '.'}, {'.', '.', '.'} };
    int linha = 0, coluna = 0, cont = 0;

    while (cont<10)
    {  
        //jogador X
        imprimeTabuleiro(mat);
        pedirLocal(&linha, &coluna);
        mat[linha][coluna] = 'x';
        ganhou(mat);

        if(ganhou(mat) == 1)
        {
            break;
        }

        //jogador O
        imprimeTabuleiro(mat);
        pedirLocal(&linha, &coluna);
        mat[linha][coluna] = 'O';
        ganhou(mat);

        if(ganhou(mat) == 1)
        {
            break;
        }

        printf("retorno : %d", ganhou(mat));

        cont = cont + 1;
    }
}
int ganhou(char mat[3][3])
{
    if ((mat[0][0] == mat[0][1]) && mat[0][0] == mat[0][2])
    {
        return 1;
    }else if (mat[1][0] == mat[1][1] && mat[1][0] == mat[1][2])
    {
        return 1;
    }else if (mat[2][0] == mat[2][1] && mat[2][0] == mat[2][2])
    {
        return 1;
    }else if (mat[0][0] == mat[1][0] && mat[0][0] == mat[2][0])
    {
        return 1;
    }else if (mat[0][1] == mat[1][1] && mat[0][1] == mat[2][1])
    {
        return 1;
    }else if (mat[0][2] == mat[1][2] && mat[0][2] == mat[2][2])
    {
        return 1;
    }else{
        return 0;
    }
}
