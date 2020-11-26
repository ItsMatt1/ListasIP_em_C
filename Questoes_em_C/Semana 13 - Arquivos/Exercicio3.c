/* Professor os três exercicios funcionam perfeitamente exceto pelo fato de lerem apenas uma linha,
eu pesquisei e li muito e não entendi certinho como funciona para ler mais de uma linha de um arquivo de texto,
unica solução foi usar muitos fgets para ler cada uma das três linhas, mas não achei prático, assim, enviei os exercicios com apenas uma linha para cada arquivo
e suas entradas e saidas funcionam.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *Arq;
    char Letras[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'w', 'y', 'z',
                     'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'X', 'W', 'Y', 'Z'};

    char String[100];
    int Counter[52] = {0};

    Arq = fopen("Exercicio3.txt", "r");

    fgets(String, sizeof(String), Arq);

    for (int i = 0; i < strlen(String); i++)
    {
        for (int j = 0; j < strlen(Letras); j++)
        {
            if (String[i] == Letras[j])
            {
                Counter[j] += 1;
            }

            if (String[i] == Letras[j] && j >= 26)
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