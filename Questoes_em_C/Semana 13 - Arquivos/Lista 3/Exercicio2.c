// POR FAVOR USAR NOTAS DE 0 A 10 =)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char NomeAlunos[40];
    int NotasFinais;

} Faculdade;

int main()
{
    FILE *Arq;
    Faculdade *Info;
    int N = 0, i = 0;
    int *Comparar, Counter = 0, Maior_Valor = -1;
    char C[2], F, Maior_Aluno[40];

    scanf("%d", &N);

    Info = (FILE *)malloc(N * sizeof(FILE));

    Comparar = (int *)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++)
    {
        printf("Infome o nome do Aluno: ");
        scanf(" %[^\n]s", Info[i].NomeAlunos);
        printf("Infome a nota final: ");
        scanf("%d", &Info[i].NotasFinais);
    }

    if (!(Arq = fopen("Exercicio2.dat", "wb+")))
    {
        printf("Erro! Nao foi possivel criar Exercicio2.dat");
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

    if (!(Arq = fopen("Exercicio2.dat", "rb+")))
    {
        printf("Erro! Nao foi possivel criar Exercicio2.dat");
    }

    while (feof(Arq) == NULL)
    {
        F = getc(Arq);

        if (i > 39)
        {
            C[i - 40] = F;
        }

        if (i > 40 && (F != '0' || F != '1' || F != '2' || F != '3' || F != '4' || F != '5' || F != '6' || F != '7' || F != '8' || F != '9'))
        {
            i = -1;

            Comparar[Counter] = atoi(C);

            if (Comparar[Counter] > Maior_Valor)
            {
                Maior_Valor = Comparar[Counter];
            }

            Counter++;
        }
        i++;
    }

    for (int i = 0; i < N; i++)
    {
        if (Info[i].NotasFinais == Maior_Valor)
        {
            sprintf(Maior_Aluno, "%s", Info[i].NomeAlunos);
        }
    }

    printf("O aluno de maior nota eh : ");

    for (int i = 0; i < strlen(Maior_Aluno); i++)
    {
        printf("%c", Maior_Aluno[i]);
    }

    fclose(Arq);

    return (0);
}