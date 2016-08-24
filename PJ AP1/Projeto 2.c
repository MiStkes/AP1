#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    char ch1[100];

    printf("Insira o seu curso: \n");
    gets(ch1);
    escreverArquivo("aulas.txt", ch1, 1, 0);
    printf("Insira a Materia: \n");
    gets(ch1);
    escreverArquivo("aulas.txt", ch1, 1, 0);
    printf("Insira o dia e o mes em que a aula sera ministrada: \n");
    gets(ch1);
    escreverArquivo("aulas.txt", ch1, 1, 0);
    printf("Insira o Horario: \n");
    gets(ch1);
    escreverArquivo("aulas.txt", ch1, 1, 0);
    printf("Insira o seu nome: \n");
    gets(ch1);
    escreverArquivo("aulas.txt", ch1, 1, 0);
    printf("Insira o Local de aula: \n");
    gets(ch1);
    escreverArquivo("aulas.txt", ch1, 1, 0);
    printf("Insira qual a sala: \n");
    gets(ch1);
    escreverArquivo("aulas.txt", ch1, 1, 1);

	return 0;
}

void escreverArquivo(char nomeDoArquivo[100], char textoParaSerEscrito[100], int adicionarBarra, int pularLinha){
    FILE *arq;
    arq = fopen(nomeDoArquivo, "a+");

    fputs(textoParaSerEscrito, arq);
    if(adicionarBarra == 1)
        fputc('|',arq);
    if(pularLinha == 1)
        fputc('\n', arq);
    fclose(arq);
}
