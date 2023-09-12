/*Faça um programa que exiba uma barra de carregamento para processar uma
compra de um determinado produto.*/

#include <stdio.h>
#include <time.h>
#include <windows.h>

int main()
{
    int i=0, j=0;

    while (i <=100)
    {
        system("cls");

        j = 0;

        printf("%i %%  ", i );
        
        while (j<=i)
        {   
            printf("/");
            j = j + 1;
        }

        i = i + 1 ;
        Sleep(100);
    }
    return 0;
}