#include <stdio.h>

int main()
{
    double notaAlunos[15], soma, count = 0;

    for (int i = 0; i < 15; i++)
    {
        scanf("%lf", &notaAlunos[i]);

        soma = soma + notaAlunos[i];

        count++;
    }

    printf("A media eh : %0.2lf", soma / count);

    return (0);
}