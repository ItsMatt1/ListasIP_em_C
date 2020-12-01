#include <stdio.h>

int main()
{
    FILE *ArqA, *ArqB, *ArqC;
    char c;

    ArqA = fopen("Exercicio4_A.txt", "r");
    ArqC = fopen("Exercicio4_C.txt", "w");

    puts("O arquivo A contem: ");

    while (!(feof(ArqA)))
    {
        c = getc(ArqA);
        putc(c, ArqC);
        printf("%c", c);
    }

    fclose(ArqA);
    fclose(ArqC);

    ArqB = fopen("Exercicio4_B.txt", "r");
    ArqC = fopen("Exercicio4_C.txt", "a");

    fprintf(ArqC, "%s", "\n");

    puts("\nO arquivo B contem: ");

    while (!(feof(ArqB)))
    {
        c = getc(ArqB);
        putc(c, ArqC);
        printf("%c", c);
    }

    fclose(ArqB);
    fclose(ArqC);

    ArqC = fopen("Exercicio4_C.txt", "r");

    puts("\nO arquivo C contem: ");

    while (!(feof(ArqC)))
    {
        c = getc(ArqC);
        printf("%c", c);
    }

    fclose(ArqC);

    return (0);
}