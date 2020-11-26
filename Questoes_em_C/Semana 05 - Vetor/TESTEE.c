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

                for (int h = 0; h < a + 1; h++)
                {
                    if (vetorA[i] != vetorIgual[h] || (vetorA[i] == 0 && vetorIgual[a] == 0))
                    {
                        x++;
                    }
                }

                if (x == a + 1)
                {
                    vetorIgual[a] = vetorA[i];
                    a++;
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