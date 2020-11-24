#include <stdio.h>

typedef struct
{
    double Altura;
    double Peso;

} Caderno;

int main()
{
    int N;
    Caderno Pessoa[10];

    printf("Digite o numero de pessoas: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        printf("Insira sua altura: ");
        scanf("%lf", &Pessoa[i].Altura);
        printf("Insira seu peso: ");
        scanf("%lf", &Pessoa[i].Peso);
    }

    for (int i = 0; i < N; i++)
    {
        printf("O IMC da pessoa %d eh : %0.5lf\n", i + 1, (Pessoa[i].Peso / (Pessoa[i].Altura * Pessoa[i].Altura)));
    }

    return (0);
}