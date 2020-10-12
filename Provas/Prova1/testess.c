#include <stdio.h>



int main()
{
    int lesma1 = 0, lesma2 = 0, lesma3 = 0, lesma4 = 0, lesma_mais_rapida = 0, i = 0, lesma_inserida = 0;

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &lesma_inserida);

        if (lesma_inserida <= 0)
        {
            lesma_mais_rapida = 0;
            i = 4;
        }
        

        if (i == 0)
        {
            lesma1 = lesma_inserida;
            lesma_mais_rapida = lesma1;
        }

        else if (i == 1)
        {
            lesma2 = lesma_inserida;

            if (lesma_mais_rapida < lesma2)
            {
                lesma_mais_rapida = lesma2;
            }
        }

        else if (i == 2)
        {
            lesma3 = lesma_inserida;

            if (lesma_mais_rapida < lesma3)
            {
                lesma_mais_rapida = lesma3;
            }
        }

        else if (i == 3)
        {
            lesma4 = lesma_inserida;

            if (lesma_mais_rapida < lesma4)
            {
                lesma_mais_rapida = lesma4;
            }
        }
    }

    if (lesma_mais_rapida > 0 && lesma_mais_rapida < 10)
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

    else
    {
        printf("Grupo Inválido\n");
    }

    return (0);
}