/* Professor os três exercicios funcionam perfeitamente exceto pelo fato de lerem apenas uma linha,
eu pesquisei e li muito e não entendi certinho como funciona para ler mais de uma linha de um arquivo de texto,
unica solução foi usar muitos fgets para ler cada uma das três linhas, mas não achei prático, assim, enviei os exercicios com apenas uma linha para cada arquivo
e suas entradas e saidas funcionam.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char String[1000] = {0};

    FILE *Arq;
    char Vogais[] = {'a', 'e', 'i', 'o', 'u',
                     'A', 'E', 'I', 'O', 'U'};
    char Consoantes[] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'x', 'w', 'y', 'z',
                         'B', 'C', 'D', 'F', 'G', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Z'};

    int CounterV = 0, CounterC = 0, CounterT = 0;
    Arq = fopen("Exercicio1.txt", "r");

    fgets(String, sizeof(String), Arq);

    printf("%s", String);

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

    printf("\nVogais = %d\n", CounterV);
    printf("Consoantes = %d\n", CounterC);

    fclose(Arq);

    return (0);
}