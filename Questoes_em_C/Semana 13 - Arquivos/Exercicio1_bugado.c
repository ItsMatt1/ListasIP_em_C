#include <stdio.h>
#include <stdlib.h>

int main()
{
    char String[1000] = {0};
    char String2[1000] = {0};
    char String3[1000] = {0};

    FILE *Arq;
    char Vogais[] = {'a', 'e', 'i', 'o', 'u',
                     'A', 'E', 'I', 'O', 'U'};
    char Consoantes[] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'x', 'w', 'y', 'z',
                         'B', 'C', 'D', 'F', 'G', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Z'};

    int CounterV = 0, CounterC = 0, CounterT = 0;
    Arq = fopen("Exercicio1.txt", "r");

    fgets(String, sizeof(String), Arq);
    fgets(String2, sizeof(String2), Arq);
    fgets(String3, sizeof(String3), Arq);

    printf("%s", String);
    printf("%s", String2);
    printf("%s ", String3);

    for (int i = 0; i < strlen(String); i++)
    {
        for (int j = 0; j < strlen(Vogais); j++)
        {
            if (String[i] == Vogais[j])
            {
                CounterV++;
            }

            else if (String[i] == Consoantes[j])
            {
                CounterC++;
            }
        }
    }

    for (int i = 0; i < strlen(String2); i++)
    {
        for (int j = 0; j < strlen(Vogais); j++)
        {
            if (String2[i] == Vogais[j])
            {
                CounterV++;
            }

            else if (String2[i] == Consoantes[j])
            {
                CounterC++;
            }
        }
    }

    for (int w = 0; w < strlen(Vogais); w++)
    {
        for (int h = 0; h < strlen(String3); h++)
        {
            if (Vogais[w] == String3[h])
            {
            }

            else if (Consoantes[w] == String3[h])
            {
                CounterC++;
            }
        }
    }

    printf("\nVogais = %d\n", CounterV);
    printf("Consoantes = %d\n", CounterC);

    fclose(Arq);

    return (0);
}