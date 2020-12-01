#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *Arq, *Arq2;
    char c[100];
    char Vogais[] = {'a', 'e', 'i', 'o', 'u',
                     'A', 'E', 'I', 'O', 'U'};
    char String[100];
    char String2[100];

    if (!(Arq = fopen("Exercicio2.txt", "r")))
    {
        printf("Erro! O arquivo nao foi aberto.");
    }

    for (int i = 0; !feof(Arq); i++)
    {
        c[i] = getc(Arq);
    }

    for (int i = 0; i < strlen(c); i++)
    {
        printf("%c", c[i]);
    }

    printf("\n");

    Arq2 = fopen("Exercicio2_B.txt", "w");

    for (int i = 0; i < strlen(c); i++)
    {
        for (int j = 0; j < strlen(Vogais); j++)
        {
            if (c[i] == Vogais[j])
            {
                String2[i] = '*';
                break;
            }
            else
            {
                String2[i] = c[i];
            }
        }
    }

    for (int i = 0; i < strlen(String2); i++)
    {
        printf("%c", String2[i]);
    }

    for (int i = 0; i < strlen(String2) - 1; i++)
    {
        fprintf(Arq2, "%c", String2[i]);
    }

    fclose(Arq);
    fclose(Arq2);

    return (0);
}