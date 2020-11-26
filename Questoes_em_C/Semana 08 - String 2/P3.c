#include <stdio.h>
#include <string.h>

int main()
{
    char Letras[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'w', 'y', 'z',
                       'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'X', 'W', 'Y', 'Z'};
    char Vogais[10] = {'a', 'e', 'i', 'o', 'u',
                       'A', 'E', 'I', 'O', 'U'};
    char Consoantes[40] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'x', 'w', 'y', 'z',
                           'B', 'C', 'D', 'F', 'G', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Z'};
    char String1[100] = {0};
    int Letras0[100] = {0}, Vogais0[100] = {0}, Consoantes0[100] = {0}, N = 0;
    int CounterL = 0, CounterV = 0, CounterC = 0;
    int i, h, w, z, j, n;

    scanf("%d ", &N);

    for (n = 0; n < N; n++)
    {
        fgets(String1, 100, stdin);

        for (i = 0; i < strlen(String1); i++)
        {
            for (j = 0; j < strlen(Letras); j++)
            {
                if (String1[i] == Letras[j])
                {
                    Letras0[CounterL] += 1;
                }
            }

            for (h = 0; h < strlen(Vogais); h++)
            {
                if (String1[i] == Vogais[h])
                {
                    Vogais0[CounterV] += 1;
                }
            }

            for (w = 0; w < strlen(Consoantes); w++)
            {
                if (String1[i] == Consoantes[w])
                {
                    Consoantes0[CounterC] += 1;
                }
            }
        }

        CounterL++;
        CounterV++;
        CounterC++;
    }

    for (z = 0; z < N; z++)
    {
        printf("Letras = %d\n", Letras0[z]);
        printf("Vogais = %d\n", Vogais0[z]);
        printf("Consoantes = %d\n", Consoantes0[z]);
    }

    return (0);
}