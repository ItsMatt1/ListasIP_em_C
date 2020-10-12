#include <stdio.h>

int main()
{
    int vetorA[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetorA[i]);

        if (vetorA[i] < 0)
        {
            vetorA[i] = 0;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetorA[i]);
    }

    return (0);
}