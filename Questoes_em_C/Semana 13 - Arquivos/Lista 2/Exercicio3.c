#include <stdio.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    FILE *Arq, *Arq2;
    char c[1000], c2[1000];
    char Nome1[1000] = {0}, Nome2[1000] = {0};
    int i = 0;

    printf("Nome do Arquivo 1: ");

    gets(Nome1);

    if (!(Arq = fopen(Nome1, "r")))
    {
        printf("Falha em abrir o arquivo, verifique se existe o arquivo %s.txt na pasta.", Nome1);
        return (0);
    }

    for (int i = 0; !feof(Arq); i++)
    {
        c[i] = getc(Arq);
    }

    puts("Conteudo do arquivo 1: ");

    for (int i = 0; i < strlen(c); i++)
    {
        printf("%c", c[i]);
    }

    puts("");

    printf("Nome do Arquivo 2: ");

    gets(Nome2);

    Arq2 = fopen(Nome2, "w");

    puts("Conteudo do arquivo 2: ");

    for (int i = 0; i < strlen(c) - 1; i++)
    {
        putc(toupper(c[i]), Arq2);
    }

    fclose(Arq2);

    Arq2 = fopen(Nome2, "r");

    for (int i = 0; !feof(Arq2); i++)
    {
        c2[i] = getc(Arq2);
        printf("%c", c2[i]);
    }

    fclose(Arq);
    fclose(Arq2);

    return (0);
}