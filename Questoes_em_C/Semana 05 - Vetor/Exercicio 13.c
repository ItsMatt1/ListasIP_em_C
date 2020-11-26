#include <stdio.h>

int main()
{
    int vetorA[10] = {0}, vetorIgual[10] = {0}, a = 0, x = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetorA[i]);

        for (int j = 0; j < i + 1; j++)
        {
            if (vetorA[i] == vetorA[j] && i != j)
            {
                x = 0;

                if (a == 0)
                {
                    vetorIgual[a] = vetorA[i];
                    a++;
                }
                else
                {
                    for (int h = 0; h < a; h++)
                    {
                        if (vetorA[i] != vetorIgual[h])
                        {
                            x++;
                        }
                    }
                    if (x == a)
                    {
                        vetorIgual[a] = vetorA[i];
                        a++;
                    }
                }
            }
        }
    }

    printf("Numeros iguais : \n");

    for (int i = 0; i < a; i++)
    {
        printf("%d ", vetorIgual[i]);
    }

    return (0);
}