#include <stdio.h>

typedef struct
{
    int NumeroDeMatricula;
    char Data[100];
    double Salario;

} Empresa;

int main()
{
    Empresa Cliente[10];
    int N = 0;
    double Media = 0;

    printf("Numero de clientes: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        fflush(stdin);
        printf("Informe o numero da matricula: ");
        scanf("%d", &Cliente[i].NumeroDeMatricula);
        printf("Informe a data de nascimento: ");
        scanf("%s", &Cliente[i].Data);
        getchar();
        printf("Informe o salario: ");
        scanf("%lf", &Cliente[i].Salario);
    }

    for (int i = 0; i < N; i++)
    {
        printf("O cliente %d possui essas informacoes: \n", i + 1);
        printf("O numero da matricula: %d\n", Cliente[i].NumeroDeMatricula);
        printf("A data de nascimento eh: %s\n", Cliente[i].Data);
        printf("O numero da matricula: %d\n", Cliente[i].NumeroDeMatricula);
    }

    return (0);
}