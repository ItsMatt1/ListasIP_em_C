#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Counter = 0;
    char C, X;
    FILE *Arq;

    if (!(Arq = fopen("Exercicio2.txt", "r")))
    {
        printf("Impossivel abrir o arquivo! Verifique se contem o arquivo com o mesmo nome do indicado no ponteiro");
        return (0);
    }

    printf("Insira o caractere que quer que conte quantas vezes aparece: ");
    scanf("%c", &X);

    while (!(feof(Arq)))
    {
        C = getc(Arq);
        printf("%c", C);

        if (C == X)
        {
            Counter++;
        }
    }

    printf("\nO caractere '%c' aparece %d vezes.", X, Counter);

    fclose(Arq);

    return (0);
}