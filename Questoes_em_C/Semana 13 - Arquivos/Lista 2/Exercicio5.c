// Professor nao consegui entender essa questao, descobri como usar atoi(string) mas mesmo assim nao entendi.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *Arq, *Arq2;
    char Letras[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'w', 'y', 'z',
                     'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'X', 'W', 'Y', 'Z'};
    char NomeArq[100], Maior_Cidade[100];
    char Cidades[100][100];
    int Maior_Valor = 0, i = 0, j = 0;
    char a;

    gets(NomeArq);

    if (!(Arq = fopen(NomeArq, "r")))
    {
        printf("Verifique se existe o arquivo %s.txt", NomeArq);
    }

    while (!(feof(Arq)))
    {
        a = getc(Arq);
        if (a != "\n")
        {
            Cidades[i][j] = a;
            j++;
        }
        else
        {
            i++;
        }
        printf("%c", Cidades[i][j]);
    }

    for (int w = 0; w < i; w++)
    {
        for (int h = 0; h < j; h++)
        {
            printf("%c", Cidades[w][h]);
        }
    }

    fclose(Arq);

    return (0);
}
