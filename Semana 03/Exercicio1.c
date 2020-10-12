#include <stdio.h>

double media_total;

double media(double x1, double x2, double x3)
{
    double media_total = (x1 + x2 + x3) / 3.00;

    return (media_total);
}

int main()
{
    double resultado;

    double nota1, nota2, nota3;

    scanf("%lf %lf %lf", &nota1, &nota2, &nota3);

    resultado = media(nota1, nota2, nota3);

    if (resultado >= 9.0 && resultado < 10.0)
    {
        printf("A");
    }

    else if (resultado >= 7.0 && resultado < 8.99)
    {
        printf("B");
    }
    else if (resultado >= 5.0 && resultado < 6.99)
    {
        printf("C");
    }
    else
    {
        printf("Reprovado");
    }

    return (0);
}