#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int matricula;
    int idade;
    int numFilhos;
    char sexo;
    double salario;

} FUNCIONARIO;

int main()
{
    int N = 0, Counter1 = 0, Counter2 = 0, Counter3 = 0, Counter4 = 0, i;
    double Media1 = 0, Soma1 = 0, Media2 = 0, Soma2 = 0;

    FUNCIONARIO *Fun;

    scanf("%d", &N);

    Fun = (FUNCIONARIO *)malloc(N * sizeof(FUNCIONARIO));

    for (i = 0; i < N; i++)
    {
        scanf("%d", &Fun[i].matricula);
        scanf("%d", &Fun[i].idade);

        Soma1 += Fun[i].idade;

        scanf("%d", &Fun[i].numFilhos);

        Soma2 += Fun[i].numFilhos;

        scanf(" %c", &Fun[i].sexo);
        scanf("%lf", &Fun[i].salario);
    }

    Media1 = Soma1 / N;
    Media2 = Soma2 / N;

    for (i = 0; i < N; i++)
    {
        if (Fun[i].idade > Media1 && Fun[i].salario > 3600)
        {
            Counter1++;
        }

        if (Fun[i].sexo == 'F' && Fun[i].numFilhos > Media2)
        {
            Counter2++;
        }

        if (Fun[i].sexo == 'M' && Fun[i].numFilhos > Media2)
        {
            Counter3++;
        }

        if (Fun[i].idade > 47 && Fun[i].salario < (2400 * (Fun[i].numFilhos + 1)))
        {
            Counter4++;
        }
    }

    printf("%d %d %d %d", Counter1, Counter2, Counter3, Counter4);

    return (0);
}