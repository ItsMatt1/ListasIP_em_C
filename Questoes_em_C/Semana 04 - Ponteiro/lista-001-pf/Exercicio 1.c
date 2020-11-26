#include <stdio.h>

int main()
{
    int inteiro;
    double real;
    char c;

    int *prtinteiro;
    double *prtreal;
    char *prtc;

    prtinteiro = &inteiro;
    prtreal = &real;
    prtc = &c;

    scanf("%d %lf %c", &inteiro, &real, &c);

    printf("Valores antes da alternação:\ninteiro: %d\nreal: %.2lf\nchar %c\n", inteiro, real, c);

    *prtinteiro += 35;
    *prtreal += 10.11;
    *prtc += 35;

    printf("Valores após a alteração:\ninteiro: %d\nreal: %.2lf\nchar: %c", inteiro, real, c);

    return (0);
}