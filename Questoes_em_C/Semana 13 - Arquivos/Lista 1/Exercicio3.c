#include <stdio.h>
#include <string.h>

int main()
{
    FILE *Arq;
    char Letras[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'w', 'y', 'z',
                     'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'X', 'W', 'Y', 'Z'};

    char CdoArquivo;
    int Counter[52] = {0};

    Arq = fopen("Exercicio3.txt", "r");

    while (!(feof(Arq)))
    {
        CdoArquivo = getc(Arq);

        for (int j = 0; j < strlen(Letras); j++)
        {
            if (CdoArquivo == Letras[j])
            {
                Counter[j] += 1;
            }

            if (CdoArquivo == Letras[j] && j >= 26)
            {
                Counter[j - 26] += 1;
            }
        }
    }

    for (int i = 0; i < strlen(Letras) / 2; i++)
    {
        printf("%c: = %d\n", Letras[i], Counter[i]);
    }

    return (0);
}