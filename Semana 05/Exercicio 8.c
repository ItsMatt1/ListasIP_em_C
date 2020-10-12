#include <stdio.h>

int main()
{

    int vetorA[6];

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &vetorA[i]);
    }

    for (int i = 5; i >= 0; i--)
    {
        printf("%d ", vetorA[i]);
    }

    return (0);
}