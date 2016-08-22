#include <stdio.h>

int main()
{
    char nomeDoArquivoParaLer[100], teste[100][100][100];
    scanf("%s", &nomeDoArquivoParaLer);
    lerArquivo(nomeDoArquivoParaLer);
}

/*
FAZER RETORNO DA MATRIZ arquivoLido[][][] para a variavel teste da funcao main
*/

void lerArquivo(char arquivoParaLer[100])
{
    int cont = 0, cont1 = 0, cont2 = 0, maxLinhas = 0, maxColunas = 0;
    FILE *arq;
    char arquivoLido[10][10][1000], ch;
    arq = fopen(arquivoParaLer, "r");
    if(arq == NULL)
        printf("Erro, nao foi possivel abrir o arquivo\n");
    else
        while( (ch=fgetc(arq))!= EOF )
        {
            if(ch != '|' && ch != '\n')
            {
                arquivoLido[cont][cont1][cont2] = ch;
                cont2++;
            }
            else if(ch == '|')
            {
                arquivoLido[cont][cont1][cont2] = ch;
                cont1++;
                cont2 = 0;
                maxLinhas++;
            }
            else if(ch == '\n')
            {
                cont++;
                cont1 = 0;
                cont2 = 0;
                maxLinhas = 0;
                maxColunas++;
            }
            printf("%c", ch);
        }
    fclose(arq);

    printf("\n\n");
    for(cont = 0; cont <= maxColunas; cont++)
    {
        for(cont1 = 0; cont1 <= maxLinhas; cont1++)
        {
            printf("%s", arquivoLido[cont][cont1]);
        }
        printf("\n");
    }

    /*return arquivoLido;*/
}
