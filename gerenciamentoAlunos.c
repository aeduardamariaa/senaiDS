/*Faça um programa para uma escola chamada IANES que fará todo o
gerenciamento de alunos, cursos, e média de alunos. Utilize um arquivo
de texto para fazer esse gerenciamento.(Escrita e leitura)*/

#include <stdio.h>

void cadastrarNovoAlunos(FILE * arquivoAlunos, char * nome, char * curso, float * media)
{
	fprintf(arquivoAlunos,"\nNome: %s\nCurso: %s\nMedia: %.2f\n\n", nome, curso, *media);
}

void lerArquivoAlunos(const char *nomeArquivo)
{
    FILE *arquivoAlunos;
    char linha[200];

    arquivoAlunos = fopen(nomeArquivo, "r"); // Abra o arquivo em modo de leitura

    if (arquivoAlunos == NULL)
    {
        printf("Erro ao abrir o arquivo de alunos.\n");
        return;
    }

    while (fgets(linha, sizeof(linha), arquivoAlunos) != NULL)
    {
        printf("%s", linha);
    }

    fclose(arquivoAlunos);
}

int main(void)
{
	
	char nome[50];
	char curso[50];
	float media = 0;
	
	FILE * arquivoAlunos;
	
	arquivoAlunos = fopen("alunos.txt", "a");
	
	printf("\nInforme o nome do aluno para cadastrar: ");
	scanf(" %s", nome);

    printf("\nInforme o curso do alunos: ");
	scanf(" %s", curso);

    printf("\nInforme a media do alunos: ");
	scanf("%f", &media);
	
	cadastrarNovoAlunos(arquivoAlunos, nome, curso, &media);

	lerArquivoAlunos("alunos.txt");	
	
	fclose(arquivoAlunos);	
	
	return 0;
}
