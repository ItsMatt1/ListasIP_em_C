#include <stdio.h>

typedef struct
{
    int Idade, NFilhos;
    char Sexo;
    double Salario;

} Pesquisa;

int main()
{
    int N = 0, Counter = 0;
    double Total, CounterF = 0;

    Pesquisa Habitante[10];

    printf("Informe quantos habitantes: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        printf("Informe sua idade: ");
        scanf("%d", &Habitante[i].Idade);
        fflush(stdin);

        printf("Informe seu sexo: 'F' ou 'M': ");
        scanf("%c", &Habitante[i].Sexo);

        if (Habitante[i].Sexo == 'F')
        {
            Counter++;
        }

        printf("Informe seu salario: ");
        scanf("%lf", &Habitante[i].Salario);

        printf("Informe a quantidade de filhos: ");
        scanf("%d", &Habitante[i].NFilhos);

        if (Habitante[i].NFilhos > 2)
        {
            CounterF++;
        }

        Total += Habitante[i].Salario;
    }

    printf("A media salarial eh de: %0.3lf\n", Total / N);
    printf("Numero de habitantes femininas sao: %d\n", Counter);
    printf("A porcentagem de pessoas que tem mais de dois filhos eh: %0.3lf%%", (CounterF / N) * 100);

    return (0);
}