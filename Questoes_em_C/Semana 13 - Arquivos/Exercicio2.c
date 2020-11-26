/* Professor os três exercicios funcionam perfeitamente exceto pelo fato de lerem apenas uma linha,
eu pesquisei e li muito e não entendi certinho como funciona para ler mais de uma linha de um arquivo de texto,
unica solução foi usar muitos fgets para ler cada uma das três linhas, mas não achei prático, assim, enviei os exercicios com apenas uma linha para cada arquivo
e suas entradas e saidas funcionam.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Counter = 0;
    char String[100];
    char X = 'a';
    FILE *Arq;

    Arq = fopen("Exercicio2.txt", "r");

    fgets(String, sizeof(String), Arq);

    X = getc(Arq);

    for (int i = 0; i < sizeof(String); i++)
    {
        if (String[i] == X)
        {
            Counter++;
        }
    }

    printf("O caractere '%c' aparece %d vezes.", X, Counter);

    fclose(Arq);

    return (0);
}