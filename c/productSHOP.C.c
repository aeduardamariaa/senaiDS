/*Desafio - > Crie um programa em C que simule um e-commerce de material de construção. Seu programa 
deverá cadastrar novos produtos, alocando memória para a quantidade necessária. O usuário poderá inserir 
novos produtos após a primeira inserção. Poderá ser feito um orçamento do valor que será gasto na compra 
de produtos escolhidos. O usuário poderá efetuar a compra se o valor inserido que foi inserido for suficiente. 
Caso o valor seja maior, devolva o troco. Após esses processos, imprima uma nota fiscal em um arquivo de texto e 
permita dentro do programa exibir todas as compras inseridas em um arquivo de texto.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[50];
    float price;
}Product;

void registerProduct(Product * product, int quantity_products, int * x)
{
    for (int i = *x; i < quantity_products; i++)
    {
        printf("Product name: ");
        scanf(" %[\n]", product[i].name);
        printf("Product price: ");
        scanf("%f", product[i].price);
    }
}

int main(void)
{
    int x = 0, quantity_products;
    
    return 0;
}