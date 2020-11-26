#include <stdio.h>

typedef struct
{
    int Matricula;
    double MediaFinal;
} Escola;

int main()
{
    Escola Aluno[10];
    int Aprovados[10], Reprovados[10], CounterA = 0, CounterB = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("Informe sua matricula: ");
        scanf("%d", &Aluno[i].Matricula);
        printf("Informe sua media final: ");
        scanf("%lf", &Aluno[i].MediaFinal);

        if (Aluno[i].MediaFinal >= 5)
        {
            Aprovados[CounterA] = Aluno[i].Matricula;
            CounterA++;
        }
        else
        {
            Reprovados[CounterB] = Aluno[i].Matricula;
            CounterB++;
        }
    }

    printf("As matriculas dos aprovados sao:\n");
    for (int i = 0; i < CounterA; i++)
    {
        printf("%d\n", Aprovados[i]);
    }
    printf("As matriculas dos reprovados sao:\n");
    for (int i = 0; i < CounterB; i++)
    {
        printf("%d\n", Reprovados[i]);
    }

    return (0);
}
