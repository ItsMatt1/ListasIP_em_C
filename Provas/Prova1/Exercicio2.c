#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a > 0 && b > 0 && c > 0)

    {

        if ((a * a) < ((b * b) + (c * c)))
        {

            printf("acutângulo\n");
        }

        else if ((a * a) == ((b * b) + (c * c)))
        {

            printf("Retângulo\n");
        }

        else if ((a * a) > ((b * b) + (c * c)))

        {

            printf("obstusângulo\n");
        }
    }

    else
    {

        printf("triângulo invalido");
    }

    return (0);
}