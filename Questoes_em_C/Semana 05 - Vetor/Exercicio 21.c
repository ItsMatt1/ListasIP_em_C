#include <stdio.h>

int main()
{
    int vetorA[10] = {0}, vetorB[10] = {0}, vetorC[20] = {0}, counter = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetorA[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetorB[i]);
    }

    for (int i = 0; i < 20; i++)
    {
        vetorC[i] = vetorA[counter];
        i++;
        vetorC[i] = vetorB[counter];
        counter++;
    }

    for (int i = 0; i < 20; i++)
    {
        if (i % 2 == 0)
        {
            printf("\n");
        }

        printf("%d ", vetorC[i]);
    }

    return (0);
}