#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int modulo=0;
void leiArq()
{

}

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int controle=0;

    printf("***Bem Vindo!!!***\n");
    printf("Programa de Monitorias\n");
    printf("Escolha sua Opção:\n");
    printf("1-Modo Aluno(Assistir Aulas,Matricular-se):\n");
    printf("2-Modo Monitor(Cadastrar Aula,Ver Alunos,Avisos Especiais):\n");
    printf("3-Modo Professor(Cadastrar Monitor,Visualizar Aulas):\n");
    printf("4-Modo Administrator(Funções do Sistema):\n");

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

/*Funções Iniciais*/
void moduloAluno()
{
    system("cls");
    printf("***Modo Aluno***\n");
    printf("1-Ver Aulas:\n");
    printf("2-Avaliar monitor:\n");
    printf("3-Forum de Duvidas:\n");
    printf("4-Voltar:\n");
    leiArq();

    scanf("%i", &controle);

    switch (controle)
    {
    case 1:
        alunoVerAulas();
        break;
    case 2:
        alunoAvaliarMonitor();
        break;
    case 3:
        forumDuvidas();
        break;
    case 4:
        return;
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
    leiArq();

    scanf("%i", &controle);

    switch (controle)
    {
    case 1:
        monitorCadastrarAula();
        break;
    case 2:
        monitorVisualizarAlunos();
        break;
    case 3:
        monitorAvisosEspeciais();
        break;
    case 4:
        forumDuvidas();
        break;
    case 5:
        return;
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
    leiArq();

    scanf("%i", &controle);

    switch (controle)
    {
    case 1:
        professorCadastrarMonitor();
        break;
    case 2:
        professorVisualizarAlunos();
        break;
    case 3:
        professorVisualizarAulas();
        break;
    case 4:
        professorVerificarAvaliaçãoMonitor();
        break;
    case 5:
        forumDuvidas();
        break;
    case 6:
        return;
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
    leiArq();

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
        administradorAvaliaçaoMonitor();
        break;
    case 6:
        forumDuvidas();
        break;
    case 7:
        return;
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
        return;
    }

    void alunoAvaliarMonitor ()
    {
        system("cls");
        printf("***Avaliar dos Monitores***\n");

    }

    void forumDuvidas()
    {
        system("cls");
        printf("***Forum de Duvidas***\n");

    }

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

    void forumDuvidas()
    {
        system("cls");
        printf("***Forum de Duvidas***\n");

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

    void avaliçaoMonitor()
    {
        system("cls");
        printf("***Avaliação de Monitores***\n")
    }

    void forumDuvidas()
    {
        system("cls");
        printf("***Forum de Duvidas***\n");

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
        printf("***Alunos Cadastrados***\n")
    }

    void avaliaçãoMonitores()
    {
        system("cls");
        printf("***Avaliação de Monitor***\n")
    }

    void forumDuvidas()
    {
        system("cls");
        printf("***Forum de Duvidas***\n");

    }

/*Funções Administrador*/
