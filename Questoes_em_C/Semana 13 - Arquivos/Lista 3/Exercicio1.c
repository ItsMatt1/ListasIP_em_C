#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char NomeAlunos[40];
    int NotasFinais;

} Faculdade;

int main()
{
    FILE *Arq;
    Faculdade *Info;
    int N = 0;

    scanf("%d", &N);

    Info = (FILE *)malloc(N * sizeof(FILE));

    for (int i = 0; i < N; i++)
    {
        printf("Infome o nome do Aluno: ");
        scanf(" %[^\n]s", Info[i].NomeAlunos);
        printf("Infome a nota final: ");
        scanf("%d", &Info[i].NotasFinais);
    }

    if (!(Arq = fopen("Exercicio1.txt", "w")))
    {
        printf("Erro! Nao foi possivel criar Exercicio1.txt");
    }

    for (int i = 0; i < N; i++)
    {

        for (int j = 0; j < 40; j++)
        {
            if (j < strlen(Info[i].NomeAlunos))
            {
                putc(Info[i].NomeAlunos[j], Arq);
            }
            else
            {
                putc(' ', Arq);
            }
        }
        fprintf(Arq, "%d\n", Info[i].NotasFinais);
    }

    fclose(Arq);

    return (0);
}