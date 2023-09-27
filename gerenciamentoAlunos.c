/*Faça um programa para uma escola chamada IANES que fará todo o
gerenciamento de alunos, cursos, e média de alunos. Utilize um arquivo
de texto para fazer esse gerenciamento.(Escrita e leitura)*/

#include <stdio.h>

void cadastrarNovoAlunos(FILE * arquivoAlunos, char * nome, char * curso, float * media)
{
	fprintf(arquivoAlunos,"Nome: %s\n", nome);
	fprintf(arquivoAlunos, "Curso: %s\n", curso);
	fprintf(arquivoAlunos, "Média: %.2f", media);
}

void lerArquivoAlunos(FILE * arquivoAlunos)
{
	char linha[200];
	
	while(fgets(linha, sizeof(linha), arquivoAlunos)!= NULL)
	{
		printf(" %s", linha);
	}
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

	
	lerArquivoAlunos(arquivoAlunos);	
	
	fclose(arquivoAlunos);	
	
	return 0;
}
