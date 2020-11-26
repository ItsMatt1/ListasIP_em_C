#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int N = 1, M = 1, i, j = 0, Tam = 0;
    int Soma = 0;
    char Soma_Vetor[11] = {0};
    int Soma_Vetor0[11] = {0};

    while ((N != 0 && M != 0))
    {
        scanf("%d %d", &N, &M);
        Soma = N + M;

        if (Soma != 0)
        {
            sprintf(Soma_Vetor, "%d", Soma);
        }
    }

    Tam = strlen(Soma_Vetor);

    for (i = 0; i < Tam; i++)
    {
        if (Soma_Vetor[i] != '0')
        {
            printf("%c\n", Soma_Vetor[i]);
        }
    }

    return (0);
}