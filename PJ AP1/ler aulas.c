
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int controle4=0, leitura=0;
    printf("1 - Ver aulas  \n");
    scanf("%d",&controle4);
leiArc();

    return 0;
}



void leiArc()
{
    int controle =0 , controle2 =0 , controle3=0;

    char url[]="aulas.txt", ch, aulas [7][100];

    char inf [1000];
    FILE *arq;

    arq = fopen(url, "r");

    if(arq == NULL)
        printf("Erro, nao foi possivel abrir o arquivo\n");
    else
        while( (ch=fgetc(arq))!= EOF )
        {

            inf[controle]=ch;
            controle++;
        }
    inf[controle]='\0';
    for(controle=0; inf[controle]!='\0'; controle++)

    {
        if (inf[controle]!='|')
        {
            switch (controle2)
            {
            case 0 :
                aulas[controle2][controle3] = inf[controle];

                controle3++;
                break;

            case 1 :
                aulas[controle2][controle3] = inf[controle];
                controle3++;
                break;

            case 2 :
                aulas[controle2][controle3] = inf[controle];
                controle3++;
                break;

            case 3 :
                aulas[controle2][controle3]= inf[controle];
                controle3++;
                break;

            case 4 :
                aulas[controle2][controle3] = inf[controle];
                controle3++;
                break;

            case 5 :
                aulas[controle2][controle3] = inf[controle];
                controle3++;
                break;

            case 6 :
                aulas[controle2][controle3] = inf[controle];
                controle3++;
                break;

            }

        }

        else
        {
            controle3=0;
            controle2++;
        }
    }

    printf("   ");
    scanf("%d",&controle2);

    switch (controle2)
    {
    case 0 :
        for(controle3=0; aulas[controle2][controle3] !='\0'; controle3++)
            printf("%c",aulas[controle2][controle3] );

        break;

    case 1 :
        for(controle3=0; aulas[controle2][controle3] !='\0'; controle3++)
            printf("%c",aulas[controle2][controle3] );

        break;

    case 2 :
        for(controle3=0; aulas[controle2][controle3] !='\0'; controle3++)
            printf("%c",aulas[controle2][controle3] );

        break;


    case 3 :
        for(controle3=0; aulas[controle2][controle3] !='\0'; controle3++)
            printf("%c",aulas[controle2][controle3] );

        break;

    case 4 :
        for(controle3=0; aulas[controle2][controle3] !='\0'; controle3++)
            printf("%c",aulas[controle2][controle3] );

        break;

    case 5 :
        for(controle3=0; aulas[controle2][controle3] !='\0'; controle3++)
            printf("%c",aulas[controle2][controle3] );

        break;

    case 6 :
        for(controle3=0; aulas[controle2][controle3] !='\0'; controle3++)
            printf("%c",aulas[controle2][controle3] );

        break;


    case 7 :
        for(controle3=0; aulas[controle2][controle3] !='\0'; controle3++)
            printf("%c",aulas[controle2][controle3] );

        break;
    }
    fclose(arq);
}

