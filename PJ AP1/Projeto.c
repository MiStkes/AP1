#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int modulo=0;
char nome[100];
char curso[100];
char materia[100];
int controle=0;

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    printf("***Bem Vindo!!!***\n");
    printf("Programa de Monitorias\n");
    while(1)
    {
        printf("Escolha sua Opção:\n");
        printf("1 - Login\n");
        printf("2 - Cadastrar-se\n");
        printf("3 - Sair do programa\n\n");
        scanf("%d", &controle);
        system("cls");
        if(controle == 1)
        {
            fazerLogin();
            break;
        }
        else if(controle == 2)
            criarLogin();
        else if(controle == 3)
            return;
        else
        {
            printf("THE CAKE IS A LIE!!!11!\n");
            printf("Esses macacos que nao sabem seguir comandos...");
        }
    }
    /*
    printf("1-Modo Aluno(Assistir Aulas,Matricular-se):\n");
    printf("2-Modo Monitor(Cadastrar Aula,Ver Alunos,Avisos Especiais):\n");
    printf("3-Modo Professor(Cadastrar Monitor,Visualizar Aulas):\n");
    printf("4-Modo Administrator(Funções do Sistema):\n");
    */
    while(1)
    {
        scanf("%i", &controle);
        switch (controle)
        {
        case 1:
            moduloAluno();
            break;
        case 2:
            moduloMonitor();
            break;
        case 3:
            moduloProfessor();
            break;
        case 4:
            moduloAdministrador();
            break;
        }
    }
}

/*Login*/
void criarLogin()
{
    int j = 0, i = 0, coisaParaSerTranscrita = 0;
    char usuario[100], nome[100], senha[100], textoParaSerEscrito [500];
    system("cls");
    printf("Para criar login digite:\n");
    gets(usuario);
    printf("Seu nick de usuario: ");
    gets (usuario);
    printf("Seu nome: ");
    gets (nome);
    printf("Sua senha: ");
    gets(senha);
    escreverArquivo("senhas.txt", usuario, 1, 0);
    escreverArquivo("senhas.txt", nome, 1, 0);
    escreverArquivo("senhas.txt", senha, 0, 1);
    /*system("cls");*/
    printf("Login criado, voltando ao menu...\n\n");
}

void fazerLogin()
{
    int controle1 = 0, controle2 = 0, usuarioEncontrado = 0, senhaCorreta = 0, linhaParaPegarSenha = 0;
    char todosLogins[100][3][200], nick[100], senha[100];
    lerArquivo("senhas.txt", todosLogins);
    gets(nick);
relogin:
    usuarioEncontrado = 0;
    senhaCorreta = 0;
    printf("Digite seu nick de usuario: ");
    gets(nick);
    printf("Digite sua senha: ");
    gets(senha);
    system("cls");
    printf("Processando");
    for(controle = 0; todosLogins[controle][0][controle2] != '\0'; controle++)
    {
        for(controle2 = 0; 1; controle2++)
        {
            printf("Usuario  %c = %c\n", todosLogins[controle][0][controle2], nick[controle2]);
            if(todosLogins[controle][0][controle2] == nick[controle2])
                continue;
            else
            {
                if(todosLogins[controle][0][controle2] == '|')
                {
                    linhaParaPegarSenha = controle;
                    printf("\n\n%i  -  linha\n\n", linhaParaPegarSenha);
                    break;
                }
                usuarioEncontrado = 1;
                break;
            }
        }
    }

    for(controle = 0; todosLogins[linhaParaPegarSenha][2][controle] != '\n'; controle++)
    {
        printf("\nsenha - %c", todosLogins[linhaParaPegarSenha][2][controle]);
    }

    printf(" %i  Usuario encontrado || %i Senha correta\n\n", usuarioEncontrado, senhaCorreta);

    if(usuarioEncontrado == 1 || senhaCorreta == 1)
    {
        printf("Usuario ou senha incorreta\n");
        printf("Por favor digite novamente:\n");
        goto relogin;
    }
    else
        printf("Bem vindo ao sistema de monitoria");
}

/*Funções Iniciais*/
void moduloAluno()
{
    system("cls");
    printf("***Modo Aluno***\n");
    printf("1-Ver Aulas:\n");
    printf("2-Avaliar monitor:\n");
    printf("3-Forum de Duvidas:\n");
    printf("4-Voltar:\n");

    while(1)
    {
        scanf("%i", &controle);
        switch (controle)
        {
        case 1:
            alunoVerAulas();
            break;
        case 2:
            avaliacaoMonitor();
            break;
        case 3:
            forumDuvida();
            break;
        case 4:
            controle=0;
            return;
        }
    }

}

void moduloMonitor()
{
    system("cls");
    printf("***Modo Monitor***\n");
    printf("1-Cadastrar Aula:\n");
    printf("2-Visualizar Alunos:\n");
    printf("3-Avisos Especiais:\n");
    printf("4-Forum de Duvidas:\n");
    printf("5-Voltar:\n");

    while(1)
    {
        scanf("%i", &controle);
        switch (controle)
        {
        case 1:
            monitorCadastrarAula();
            break;
        case 2:
            monitorVisualizarAluno();
            break;
        case 3:
            monitorAvisosEspeciais();
            break;
        case 4:
            forumDuvida();
            break;
        case 5:
            controle=0;
            return;
        }
    }

}

void moduloProfessor()
{
    system("cls");
    printf("***Modo Professor***\n");
    printf("1-Cadastrar Monitor:\n");
    printf("2-Visualizar Alunos:\n");
    printf("3-Visualizar Aulas:\n");
    printf("4-Verificar Avaliação dos Monitores:\n");
    printf("5-Forum de Duvidas:\n");
    printf("6-Voltar:\n");


    while(1)
    {
        scanf("%i", &controle);
        switch (controle)
        {
        case 1:
            professorCadastrarMonitor();
            break;
        case 2:
            professorVisualizarAluno();
            break;
        case 3:
            professorVisualizarAula();
            break;
        case 4:
            avaliacaoMonitor();
            break;
        case 5:
            forumDuvida();
            break;
        case 6:
            controle=0;
            controle=0;
            return;
        }
    }

}

void moduloAdministrador()
{
    system("cls");
    printf("***Modo Administrador***\n");
    printf("1-Cadastrar Professor:\n");
    printf("2-Professores Cadastrados:\n");
    printf("3-Monitores Cadastrados:\n");
    printf("4-Alunos Cadastrados:\n");
    printf("5-Verificar Avaliação de monitores:\n");
    printf("6-Forum de Duvidas:\n");
    printf("7-Voltar:\n");


    while(1)
    {
        scanf("%i", &controle);

        switch (controle)
        {
        case 1:
            administradorCadastrarProfessor();
            break;
        case 2:
            administradorProfessoresCadastrados();
            break;
        case 3:
            administradorMonitoresCadastrados();
            break;
        case 4:
            administradorAlunosCadastrados();
            break;
        case 5:
            avaliacaoMonitor();
            break;
        case 6:
            forumDuvida();
            break;
        case 7:
            controle=0;
            return;
        }
    }

}
/*Funções Iniciais*/

/*Funções Aluno*/

void alunoVerAulas()
{
    system("cls");
    printf("***Ver Aulas***\n");
    printf("1-Horarios Disponiveis:\n");
    printf("2-Aulas Matriculadas:\n");
    printf("3-Voltar:\n");


    while(1)
    {
        scanf("%i", &controle);

        switch (controle)
        {
        case 1:
            alunoAulasHorarios();
            break;
        case 2:
            alunoAulasMatriculadas();
            break;
        case 3:
            controle=0;
            return;
        }
    }

}

///*Funções Aluno|Ver Aulas*///

void alunoAulasHorarios()
{
    system("cls");
    printf("***Horarios Disponiveis***\n");

}

void alunoAulasMatriculadas()
{
    system("cls");
    printf("***Aulas Matriculadas***\n");

}

///*Funções Aluno|Ver Aulas*///

/*Funções Aluno*/

/*Funções Monitores*/

void monitorCadastrarAula()
{
    system("cls");
    printf("***Cadastrar Aulas***\n");
}

void monitorVisualizarAluno()
{
    system("cls");
    printf("***Visualizar Alunos***\n");

}

void monitorAvisosEspeciais()
{
    system("cls");
    printf("***Avisos Especiais***\n");

}

/*Funções Monitores*/

/*Funções Professor*/

void professorCadastrarMonitor()
{
    system("cls");
    printf("***Cadastrar Aulas***\n");
}

void professorVisualizarAluno()
{
    system("cls");
    printf("***Visualizar Alunos***\n");

}

void professorVisualizarAula()
{
    system("cls");
    printf("***Visualizar Aulas***\n");

}

/*Funções Professor*/

/*Funções Administrador*/

void administradorCadastrarProfessor()
{
    system("cls");
    printf("***Cadastrar Professores***\n");
}

void administradorProfessoresCadastrados()
{
    system("cls");
    printf("***Professores Cadastrados***\n");

}

void administradorMonitoresCadastrados()
{
    system("cls");
    printf("***Monitores Cadastrados***\n");

}

void administradorAlunosCadastrados()
{
    system("cls");
    printf("***Alunos Cadastrados***\n");
}

void avaliacaoMonitor()
{
    system("cls");
    printf("***Avaliação de Monitor***\n");
}

void forumDuvida()
{
    system("cls");
    printf("***Forum de Duvidas***\n");

}

/*Funções Administrador*/



void escreverArquivo(char nomeDoArquivo[100], char textoParaSerEscrito[100], int adicionarBarra, int pularLinha)
{
    FILE *arq;
    arq = fopen(nomeDoArquivo, "a+");

    fputs(textoParaSerEscrito, arq);
    if(adicionarBarra == 1)
        fputc('|',arq);
    if(pularLinha == 1)
        fputc('\n', arq);
    fclose(arq);
}

void lerArquivo(char arquivoParaLer[100], char matrizParaRetornar[100][100][500])
{
    int cont = 0, cont1 = 0, cont2 = 0, maxLinhas = 0, maxColunas = 0;
    FILE *arq;
    char ch;
    arq = fopen(arquivoParaLer, "r");
    if(arq == NULL)
        printf("Erro, nao foi possivel abrir o arquivo\n");
    else
        while( (ch=fgetc(arq))!= EOF )
        {
            if(ch != '|' && ch != '\n')
            {
                matrizParaRetornar[cont][cont1][cont2] = ch;
                cont2++;
            }
            else if(ch == '|')
            {
                matrizParaRetornar[cont][cont1][cont2] = ch;
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
        }
    fclose(arq);
}
