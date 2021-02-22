#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *Arq, *Arq2;
    char ArqEntrada[100], ArqSaida[100], C[100];
    int i = 0;

    printf("Nome do arquivo de entrada: ");

    gets(ArqEntrada);

    printf("Nome do arquivo de saida: ");

    gets(ArqSaida);

    if (!(Arq = fopen(ArqEntrada, "r")))
    {
        printf("Erro! Impossivel encontrar o arquivo %s.txt", ArqEntrada);
        return (0);
    }

    if (!(Arq2 = fopen(ArqSaida, "w")))
    {
        printf("Erro! Impossivel criar o arquivo %s.txt", ArqSaida);
        return (0);
    }

    for (int i = 0; !feof(Arq); i++)
    {
        C[i] = getc(Arq);
    }

    for (int i = strlen(C) - 2; i >= 0; i--)
    {
        putc(C[i], Arq2);
    }

    printf("Deu tudo certo! Verifique o arquivo %s.txt", ArqSaida);

    fclose(Arq);
    fclose(Arq2);

    return (0);
}