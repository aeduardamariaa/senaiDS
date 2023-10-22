/*Desafio - > Crie um programa em C que simule um e-commerce de material de constru��o. Seu programa 
dever� cadastrar novos produtos, alocando mem�ria para a quantidade necess�ria. O usu�rio poder� inserir 
novos produtos ap�s a primeira inser��o. Poder� ser feito um or�amento do valor que ser� gasto na compra 
de produtos escolhidos. O usu�rio poder� efetuar a compra se o valor inserido que foi inserido for suficiente. 
Caso o valor seja maior, devolva o troco. Ap�s esses processos, imprima uma nota fiscal em um arquivo de texto e 
permita dentro do programa exibir todas as compras inseridas em um arquivo de texto.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    float price;
} Product;

void menu() {
    printf("\n******** E-COMMERCE DE MATERIAL DE CONSTRU��O ********\n");
    printf("1 - Cadastrar produtos\n");
    printf("2 - Or�amento\n");
    printf("3 - Concluir Compra\n");
    printf("4 - Exibir Compras\n");
    printf("0 - SAIR\n");
}

void writeToFile(Product *products, int count) {
	int i;
    FILE *file = fopen("produtos.txt", "w");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    for ( i = 0; i < count; i++) {
        fprintf(file, "%s\t%.2f\n", products[i].name, products[i].price);
    }

    fclose(file);
}

void registerProduct(Product **products, int *count) {
	int i;
    printf("Quantos produtos deseja cadastrar: ");
    int quantity;
    scanf("%d", &quantity);

    *products = (Product *)realloc(*products, (*count + quantity) * sizeof(Product));

    if (*products == NULL) {
        printf("Erro na aloca��o de mem�ria.\n");
        exit(1);
    }

    for (i = *count; i < *count + quantity; i++) {
        printf("Nome do produto %d: ", i + 1);
        scanf(" %[^\n]", (*products)[i].name);
        printf("Pre�o do produto %d: ", i + 1);
        scanf("%f", &(*products)[i].price);
    }

    *count += quantity;
    writeToFile(*products, *count);
}

void showProducts(Product *products, int count) {
	int i;
    printf("\nProdutos cadastrados:\n");
    for ( i = 0; i < count; i++) {
        printf("Nome: %s\tPre�o: %.2f\n", products[i].name, products[i].price);
    }
}

float calculateTotal(Product *products, int count, char chosenProducts[][50], int quantity) {
	int i, j;
    float total = 0.0;
    for ( i = 0; i < quantity; i++) {
        for ( j = 0; j < count; j++) {
            if (strcmp(chosenProducts[i], products[j].name) == 0) {
                total += products[j].price;
                break;
            }
        }
    }
    return total;
}

void generateInvoice(char chosenProducts[][50], int quantity, float total) {
	int i;
    FILE *file = fopen("nota_fiscal.txt", "w");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo da nota fiscal.\n");
        return;
    }

    fprintf(file, "NOTA FISCAL\n\nProdutos:\n");

    for ( i = 0; i < quantity; i++) {
        fprintf(file, "- %s\n", chosenProducts[i]);
    }

    fprintf(file, "\nTotal: R$ %.2f\n", total);
    fclose(file);
}

int main(void) {
    int productCount = 0;
    Product *products = NULL;
    char chosenProducts[50][50];
    int chosenQuantity = 0;
    float total = 0.0;
    
    int op;
    do {
        menu();
        printf("\nQual opera��o deseja: ");
        scanf("%d", &op);
        switch (op) {
            case 1:
                registerProduct(&products, &productCount);
                break;
            case 2:
                showProducts(products, productCount);
                printf("Insira os produtos desejados (um por vez, digite '0' para finalizar):\n");
                int i = 0;
                do {
                    printf("Nome do produto %d: ", i + 1);
                    scanf(" %[^\n]", chosenProducts[i]);
                    if (strcmp(chosenProducts[i], "0") == 0) break;
                    i++;
                } while (i < 50);
                chosenQuantity = i;
                total = calculateTotal(products, productCount, chosenProducts, chosenQuantity);
                printf("Total do or�amento: R$ %.2f\n", total);
                break;
            case 3:
                if (total == 0) {
                    printf("Fa�a um or�amento primeiro.\n");
                } else {
                    float payment;
                    printf("Insira o valor do pagamento: R$ ");
                    scanf("%f", &payment);
                    if (payment < total) {
                        printf("Pagamento insuficiente. Faltam R$ %.2f.\n", total - payment);
                    } else {
                        printf("Compra conclu�da! Troco: R$ %.2f.\n", payment - total);
                        generateInvoice(chosenProducts, chosenQuantity, total);
                        total = 0;
                        chosenQuantity = 0;
                    }
                }
                break;
            case 4:
                generateInvoice(chosenProducts, chosenQuantity, total);
                break;
            case 0:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Op��o inv�lida.\n");
        }
    } while (op != 0);
    free(products);
    return 0;
}

