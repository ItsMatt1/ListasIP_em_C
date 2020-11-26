#include <stdio.h>

int main()
{
    double VetorA[10];
    double VetorB[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%lf", &VetorA[i]);

        VetorB[i] = VetorA[i] * VetorA[i];
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Os valores do vetor A eh %lf\n", VetorA[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("\nOs valores ao quadrado sao : %lf", VetorB[i]);
    }

    return (0);
}