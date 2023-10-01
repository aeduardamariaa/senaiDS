/*3- Leia uma matriz de 3 x 3 elementos. Fa�a a invers�o dos valores armazenados nessa matriz*/

#include <stdio.h>
#define LINHA 3
#define COLUNA 3

void preencheMatriz(int mat[LINHA][COLUNA]) {
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            printf("Informe valor para a linha %i e coluna %i: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void imprimeMatriz(int mat[LINHA][COLUNA]) {	
    for (int i = 0; i < LINHA; i++) {
        printf("\n");

        for (int j = 0; j < COLUNA; j++) {
            printf(" %d ", mat[i][j]);
        }
    }
}

void inverteMatriz(int mat[LINHA][COLUNA], int mat_inversa[LINHA][COLUNA]) {
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            mat_inversa[i][j] = -mat[i][j];
        }
    }
}

int main(void) {
    int mat[LINHA][COLUNA], mat_inversa[LINHA][COLUNA];
    
    preencheMatriz(mat);
    imprimeMatriz(mat);
    
    inverteMatriz(mat, mat_inversa);
    
    printf("\nInversa: ");
    imprimeMatriz(mat_inversa);
    
    return 0;
}
