#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int Matricula;
    char Sobrenome[100];
    char DataNascimento[100];

} Cadastro;

int main()
{
    FILE *Arq;
    Cadastro *Alunos;
    int N = 0;

    printf("Informe o numero de alunos: ");

    scanf("%d", &N);

    if (!(Arq = fopen("Exercicio3.txt", "w")))
    {
        printf("Erro! O arquivo nao foi criado.");
    }

    Alunos = (Cadastro *)malloc(N * sizeof(Cadastro));

    for (int i = 0; i < N; i++)
    {
        printf("Informe a Matricula: ");
        scanf("%d", &Alunos[i].Matricula);
        fprintf(Arq, "A matricula eh :%d", Alunos[i].Matricula);

        printf("Informe o Sobrenome: ");
        scanf(" %[^\n]s", Alunos[i].Sobrenome);
        fprintf(Arq, ", o sobrenome eh :%s,", Alunos[i].Sobrenome);

        printf("Informe a Data: ");
        scanf("\n%[^\n]s", Alunos[i].DataNascimento);
        fprintf(Arq, " e a data de nascimento eh: %s\n", Alunos[i].DataNascimento);
    }

    for (int i = 0; i < N; i++)
    {
        printf("O aluno %d tem esses dados:\n", i + 1);
        printf("Matricula: %d.\n", Alunos[i].Matricula);
        printf("Sobrenome: %s.\n", Alunos[i].Sobrenome);
        printf("Data de nascimento: %s.\n", Alunos[i].DataNascimento);
    }

    fclose(Arq);
    free(Alunos);

    return (0);
}