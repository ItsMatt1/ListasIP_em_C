#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    // Declarando variáveis
    double a, b, c, d;
    double delta;
    double x1, x2;
    double resultado;
    char resposta;

volta:
    // Início
    printf("tem-se uma equacao do segundo grau ax^2 bx c = 0");
    printf("\n \t insira a: ");
    scanf("%lf", &a);
    printf("\t insira b: ");
    scanf("%lf", &b);
    printf("\t insira c: ");
    scanf("%lf", &c);

    // Definindo identidades
    delta = ((b * b) - (4.0 * a * c));
    x1 = (((-b) + (sqrt(delta))) / 2 * a);
    x2 = (((-b) - (sqrt(delta))) / 2 * a);
    // Avaliando o primeiro caso (a diferente de zero e delta maior ou igual a zero)
    if (a != 0 && delta >= 0)
    {
        printf("entao sua equacao do segundo grau eh dada por: %lfx^2 %lfx %lf = 0", a, b, c);
        printf("\t \t \n aperte qualquer tecla para obter as raizes: ");
        scanf("%d", &d);
        printf("sendo as raizes: x1 e x2, tem-se x1=%0.2lf e x2=%0.2lf", x1, x2);
        printf("\t \t \n alem disso, o x do vertice eh: xv=%0.2lf e o y do vertice eh: yv=%0.2lf", ((x1 + x2) / 2 * a), (-(delta) / 4 * a));

        if (a < 0)
        {
            printf("\t \t \n a parabola tem concavidade para baixo");
        }
        else
        {
            printf("\t \t \n a parabola tem concavidade para cima");
        }
    }
    // Avaliando o segundo caso (a igual a zero e delta qualquer)
    else if ((a == 0) && (delta == 0 || delta != 0))
    {
        printf("com a=%lf, tem-se uma equacao linear, do tipo %0.3lfx + %0.3lf = 0", a, b, c);
        printf("\t \t \n pressione uma teclada para achar a raiz: ");
        scanf("%d", &d);

        resultado = ((-c) / b);

        printf("tem-se que x1=%0.3lf", resultado);
    }
    // Avaliando o terceiro caso (a diferente de zero e delta menor que zero)
    else if ((a != 0) && (delta < 0))
    {
        puts("a equacao nao tem solucao real");
    }

    printf("\nvoce quer comecar dnv? Y ou N: \n");
    fflush(stdin);

    scanf("%c", &resposta);

    if (resposta == 'Y' || resposta == 'y')
    {
        goto volta;
    }
    else
    {
        puts("fim do programa =)");
    }

    return (0);
}