#include <stdio.h>

int main()
{
    int vetorA[50];

    for (int i = 0; i < 50; i++)
    {
        vetorA[i] = (i + (5 * i)) % (i + 1);
        printf("%d ", vetorA[i]);
    }

    return (0);
}