#include <stdio.h>

int main()
{
    int lesma1 = 0, lesma2 = 0, lesma3 = 0, lesma4 = 0, lesma_mais_rapida = 0, i = 0;

    scanf("%d %d %d %d", &lesma1, &lesma2, &lesma3, &lesma4);

    if (lesma1 > 0 && lesma2 > 0 && lesma3 > 0 && lesma4 > 0 && i < 4)
    {

        if (lesma1 > lesma2 && lesma1 > lesma3 && lesma1 > lesma4)
        {
            lesma_mais_rapida = lesma1;
        }

        else if (lesma2 > lesma1 && lesma2 > lesma3 && lesma2 > lesma4)
        {
            lesma_mais_rapida = lesma2;
        }

        else if (lesma3 > lesma1 && lesma3 > lesma2 && lesma3 > lesma4)
        {
            lesma_mais_rapida = lesma3;
        }

        else if (lesma4 > lesma1 && lesma4 > lesma2 && lesma4 > lesma3)
        {
            lesma_mais_rapida = lesma4;
        }

        if (lesma_mais_rapida < 10)
        {
            printf("Nivel 1\n");
        }

        else if (lesma_mais_rapida >= 10 && lesma_mais_rapida < 20)
        {
            printf("Nivel 2\n");
        }

        else if (lesma_mais_rapida >= 20)
        {
            printf("Nivel 3\n");
        }

        i++;
    }

    else
    {
        printf("Grupo Inválido\n");
    }

    return(0);
}