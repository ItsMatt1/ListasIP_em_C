#include <stdio.h>

int main()
{
    int Vetor[1000] = {0}, N = 0, i, Counter = 0, Counter2 = 0;
    double Soma = 0, Media = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &Vetor[i]);
        Soma += Vetor[i];
    }

    if (N <= 5)
    {
        printf("QUANTIDADE DE ELEMENTOS INVALIDOS!");
        return (0);
    }

    Media = Soma / i;

    if (N % 2 == 0)
    {
        for (i = 0; i < (N / 2); i++)
        {
            if (Vetor[i] > Media)
            {
                Counter++;
            }
        }

        for (i = (N / 2); i < N; i++)
        {
            if (Vetor[i] > Media)
            {
                Counter2++;
            }
        }
    }
    else
    {
        for (i = 0; i < (N / 2); i++)
        {
            if (Vetor[i] > Media)
            {
                Counter++;
            }
        }
        for (i = (N / 2) + 1; i < N; i++)
        {
            if (Vetor[i] > Media)
            {
                Counter2++;
            }
        }
    }

    if (Counter > Counter2)
    {
        printf("%0.2lf %d %d PRIMEIRA METADE\n", Media, Counter, Counter2);
    }
    else if (Counter2 > Counter)
    {
        printf("%0.2lf %d %d SEGUNDA METADE\n", Media, Counter, Counter2);
    }
    else
    {
        printf("%0.2lf %d %d EMPATE\n", Media, Counter, Counter2);
    }

    return (0);
}