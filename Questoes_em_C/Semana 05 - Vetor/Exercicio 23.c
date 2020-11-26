#include <stdio.h>

int main()
{
    int vetorA[100] = {0}, a = 0, i = 0;

    while (i < 100)
    {
        if (a % 7 != 0 && (a % 10 != 7))
        {
            vetorA[i] = a;

            i++;
        }
        a++;
    }

    for (int i = 0; i < 100; i++)
    {
        printf("%d ", vetorA[i]);
    }

    return (0);
}