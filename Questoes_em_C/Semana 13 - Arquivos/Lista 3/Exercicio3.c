// Professor fiquei em duvida sobre esse exercicio

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *Arq;
    char NomeEntrada[100];
    char F, C;
    int i = 0, j = 0;
    int Notas[4];
    int T = 0;

    puts("Insira o nome do arquivo: ");

    if (!(Arq = fopen("Exercicio3.txt", "r+")))
    {
        printf("Deu erro na leitura do arquivo.");
    }

    while (feof(Arq) == NULL)

    {
        F = getc(Arq);

        T = atoi(F);

        printf("%c", F);

        if (i >= 40 && F != ' ' && isdigit(atoi(F)) != NULL)
        {
            Notas[j] = atoi(F);
            j++;
        }

        i++;
    }

    for (int w = 0; w < j; w++)
    {
        printf("%d\n", Notas[w]);
    }

    fclose(Arq);

    return (0);
}