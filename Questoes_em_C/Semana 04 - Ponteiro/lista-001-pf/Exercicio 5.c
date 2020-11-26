#include <stdio.h>

int a, b;

int *prta = &a;
int *prtb = &b;

int trocarValores(int *a, int *b)
{
    int temp;

    if (*a % 2 != 0)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    else
    {
        *a = *a;
        *b = *b;
    }
}

int main()
{

    scanf("%d %d", &a, &b);

    trocarValores(prta, prtb);

    printf("Os valores de A e B são: %d %d.", a, b);

    return (0);
}