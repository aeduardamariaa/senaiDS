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

int ganhou(char mat[3][3], char jogador)
{
    if ((mat[0][0] == mat[0][1] && mat[0][0] == mat[0][2]) && (mat[0][0] != '.' && mat[0][1] != '.' && mat[0][2] != '.'))
    {
        return 1; 
    }
    else if ((mat[1][0] == mat[1][1] && mat[1][0] == mat[1][2]) && (mat[1][0] != '.' && mat[1][1] != '.' && mat[1][2] != '.'))
    {
        return 1; 
    }
    else if ((mat[2][0] == mat[2][1] && mat[2][0] == mat[2][2]) && (mat[2][0] != '.' && mat[2][1] != '.' && mat[2][2] != '.'))
    {
        return 1; 
    }
    else if ((mat[0][0] == mat[1][0] && mat[0][0] == mat[2][0]) && (mat[0][0] != '.' && mat[1][0] != '.' && mat[2][0] != '.'))
    {
        return 1; 
    }
    else if ((mat[0][1] == mat[1][1] && mat[0][1] == mat[2][1]) && (mat[0][1] != '.' && mat[1][1] != '.' && mat[2][1] != '.'))
    {
        return 1;
    }
    else if ((mat[0][2] == mat[1][2] && mat[0][2] == mat[2][2]) && (mat[0][2] != '.' && mat[1][2] != '.' && mat[2][2] != '.'))
    {
        return 1; 
    }
    else if ((mat[0][0] == mat[1][1] && mat[0][0] == mat[2][2]) && (mat[0][0] != '.' && mat[1][1] != '.' && mat[2][2] != '.'))
    {
        return 1; 
    }
    else if ((mat[0][2] == mat[1][1] && mat[0][2] == mat[2][0]) && (mat[0][2] != '.' && mat[1][1] != '.' && mat[2][0] != '.'))
    {
        return 1; 
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    char mat[3][3] = { {'.', '.', '.'}, {'.', '.', '.'}, {'.', '.', '.'} };
    int linha = 0, coluna = 0, cont = 0;
    char jogador = 'X';

    while (cont<9)
    {  
        imprimeTabuleiro(mat);

        pedirLocal(&linha, &coluna);
        
        if (mat[linha][coluna] == '.')
        {
            mat[linha][coluna] = jogador;
            cont++;
        }
        else
        {
            printf("\nPosição já ocupada, tente novamente!");
            continue;
        }

        if (ganhou(mat, jogador))
        {
            printf("\nO jogador %c venceu!\n", jogador);
            break;
        }

        jogador = (jogador == 'X')? 'O' : 'X' ;

    }
    if (cont == 9)
    {
        imprimeTabuleiro(mat);
        printf("\n\nEmpate!\n");
    }

    return 0;
}
