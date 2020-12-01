#include <stdio.h>
#include <stdlib.h>

int main()
{
    char String[1000] = {0};
    char Teste[1000] = {0};
    int Tamanho = 0;
    char C;

    FILE *Arq;
    char Vogais[] = {'a', 'e', 'i', 'o', 'u',
                     'A', 'E', 'I', 'O', 'U'};
    char Consoantes[] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'x', 'w', 'y', 'z',
                         'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z'};

    int CounterV = 0, CounterC = 0, CounterT = 0;

    if (!(Arq = fopen("Exercicio1.txt", "r")))
    {
        printf("Impossivel abrir o arquivo! Verifique se contem o arquivo com o mesmo nome do indicado no ponteiro");
    }

    while (!(feof(Arq)))
    {
        C = getc(Arq);
        printf("%c", C);

        for (int i = 0; i < strlen(Vogais); i++)
        {
            if (C == Vogais[i])
            {
                CounterV++;
            }
        }

        for (int j = 0; j < strlen(Consoantes); j++)
        {

            if (C == Consoantes[j])
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