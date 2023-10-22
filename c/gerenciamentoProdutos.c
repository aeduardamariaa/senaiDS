/*Desafio - > Crie um programa em C que simule um e-commerce de material de construção. Seu programa 
deverá cadastrar novos produtos, alocando memória para a quantidade necessária. O usuário poderá inserir 
novos produtos após a primeira inserção. Poderá ser feito um orçamento do valor que será gasto na compra 
de produtos escolhidos. O usuário poderá efetuar a compra se o valor inserido que foi inserido for suficiente. 
Caso o valor seja maior, devolva o troco. Após esses processos, imprima uma nota fiscal em um arquivo de texto e 
permita dentro do programa exibir todas as compras inseridas em um arquivo de texto.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    float price;
} Product;

void menu() {
    printf("\n******** E-COMMERCE DE MATERIAL DE CONSTRUÇÃO ********\n");
    printf("1 - Cadastrar produtos\n");
    printf("2 - Orçamento\n");
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
        printf("Erro na alocação de memória.\n");
        exit(1);
    }

    for (i = *count; i < *count + quantity; i++) {
        printf("Nome do produto %d: ", i + 1);
        scanf(" %[^\n]", (*products)[i].name);
        printf("Preço do produto %d: ", i + 1);
        scanf("%f", &(*products)[i].price);
    }

    *count += quantity;
    writeToFile(*products, *count);
}

void showProducts(Product *products, int count) {
	int i;
    printf("\nProdutos cadastrados:\n");
    for ( i = 0; i < count; i++) {
        printf("Nome: %s\tPreço: %.2f\n", products[i].name, products[i].price);
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
        printf("\nQual operação deseja: ");
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
                printf("Total do orçamento: R$ %.2f\n", total);
                break;
            case 3:
                if (total == 0) {
                    printf("Faça um orçamento primeiro.\n");
                } else {
                    float payment;
                    printf("Insira o valor do pagamento: R$ ");
                    scanf("%f", &payment);
                    if (payment < total) {
                        printf("Pagamento insuficiente. Faltam R$ %.2f.\n", total - payment);
                    } else {
                        printf("Compra concluída! Troco: R$ %.2f.\n", payment - total);
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
                printf("Opção inválida.\n");
        }
    } while (op != 0);
    free(products);
    return 0;
}

