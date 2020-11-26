#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Planilha
{
    int CodigoCurso;
    double ValorPorCreditoCurso;
    char NomeDoCurso[100];

} Universidade;

typedef struct Planilha2
{
    char NomeDoAluno[100];
    char NomeDoCursoDoAluno[100];
    int CodigoCursoAluno;
    int CreditosAtuais;
    double ValorPorCreditoAluno;

} Dados;

int main()
{
    int N, M, i, j;
    Universidade Curso[30];
    Dados Aluno[50];

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &Curso[i].CodigoCurso);
        scanf("%lf", &Curso[i].ValorPorCreditoCurso);
        scanf(" %[^\n]s", Curso[i].NomeDoCurso);
    }

    scanf("%d", &M);

    for (i = 0; i < M; i++)
    {
        scanf(" %[^\n]s", Aluno[i].NomeDoAluno);
        scanf("%d", &Aluno[i].CodigoCursoAluno);

        for (j = 0; j < N; j++)
        {
            if (Aluno[i].CodigoCursoAluno == Curso[j].CodigoCurso)
            {
                sprintf(Aluno[i].NomeDoCursoDoAluno, "%s", Curso[j].NomeDoCurso);
                Aluno[i].ValorPorCreditoAluno = Curso[j].ValorPorCreditoCurso;
            }
        }
        scanf("%d", &Aluno[i].CreditosAtuais);
    }

    for (i = 0; i < M; i++)
    {
        printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %0.2lf Mensalidade: %0.2lf\n",
               Aluno[i].NomeDoAluno, Aluno[i].NomeDoCursoDoAluno, Aluno[i].CreditosAtuais, Aluno[i].ValorPorCreditoAluno, (Aluno[i].CreditosAtuais * Aluno[i].ValorPorCreditoAluno));
    }

    return (0);
}