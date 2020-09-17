#include <stdio.h>

int main()
{
    float a;

    for (int i = 1; i < 11; i++)
    {
        scanf("%f", &a);
        printf("A metade de %0.2f eh %0.2f\n", a, (a / 2));
    }

    return (0);
}