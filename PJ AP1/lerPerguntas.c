#include <stdio.h>
#include <stdlib.h>



void main()
{
    int controle =0 , controle2 =0 , controle3=0, controle4 =0, controle5 =0;

    char url[]="pergunta.txt", ch, aulas [100][100];

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
            if(inf[controle] != '?')
            {


                aulas[controle2][controle3] = inf[controle];

                controle3++;
                            }
             else
                {
                    aulas[controle2][controle3+1]='?';
                    controle2++;
                    controle3=0;
                }


            }
  printf("  \n\n ");
        for(controle2=0,controle3=0; aulas[controle2][controle3] !='?'; controle3++)
        {
            if (aulas[controle2][controle3]!='|')
               printf("%c",aulas[controle2][controle3] );
               else
                  printf(" | ");
        }



printf("? \n \n resposta | numero de avaliacoes | media | avaliada :\n\n");
        for(controle2=1,controle3=0; aulas[controle2][controle3] !='¨'; controle3++)
        {
            if(aulas[controle2][controle3]=='\n')
               {
                   controle4++;
                   printf("\n\n%d - ", controle4);
               }
            else if (aulas[controle2][controle3]!='|')
               printf("%c",aulas[controle2][controle3] );

               else
               {
                  printf(" | ");
                  controle5++;
               }
        }
printf("\n");
    fclose(arq);
}

void calculo (){







}
