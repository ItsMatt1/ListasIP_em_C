#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N, M, i;
    int Soma = 0;
    char Soma_Vetor[11] = {0};

    scanf("%d %d", &M, &N);

    Soma = N + M;

    sprintf(Soma_Vetor, "%d", Soma);

    while (N != 0 && M != 0)
    {
        for (i = 0; i < strlen(Soma_Vetor); i++)
        {
            if (Soma_Vetor[i] != '0')
            {
                printf("%c", Soma_Vetor[i]);
            }
        }

        printf("\n");

        scanf("%d %d", &N, &M);

        Soma = N + M;

        sprintf(Soma_Vetor, "%d", Soma);
    }

    return (0);
}