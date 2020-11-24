#include <stdio.h>

#define MAX 500

int ehPermutacao(int matriz[500][500], int n, int *soma)
{
    int Counter0 = 0;
    int i, j;

    for (i = 0; i < n; i++)
    {
        Counter0 = 0;

        for (j = 0; j < n; j++)
        {
            if (matriz[i][j] == 0)
            {
                Counter0++;
            }
        }

        if (Counter0 != (n - 1))
        {
            return (0);
        }
    }

    for (i = 0; i < n; i++)
    {
        Counter0 = 0;

        for (j = 0; j < n; j++)
        {

            if (matriz[j][i] == 0)
            {
                Counter0++;
            }
        }

        if (Counter0 != (n - 1))
        {
            return (0);
        }
    }

    return (1);
}

int main()

{
    int Matriz[MAX][MAX];

    int N = 0, j, i, Resultado = 0, SomaTotal = 0;

    int *Soma = &SomaTotal;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &Matriz[i][j]);
        }
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            SomaTotal = SomaTotal + Matriz[i][j];
        }
    }

    Resultado = ehPermutacao(Matriz, N, *Soma);

    printf("%d\n", N);

    if (Resultado == 1)
    {
        printf("PERMUTACAO\n");
    }
    else
    {
        printf("NAO EH PERMUTACAO\n");
    }

    printf("%d", *Soma);

    return (0);
}