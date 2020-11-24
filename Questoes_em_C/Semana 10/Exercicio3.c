#include <stdio.h>

typedef struct
{
    char Nome[100];
    int Codigo;
    double Preco;

} Loja;

int main()
{
    char A;
    int N = 0, Cod = 0;
    Loja Produto[10];

    printf("Informe quantos produtos quer cadastrar: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        fflush(stdin);
        printf("Informe o nome do produto: ");
        scanf("%[^\n]s", Produto[i].Nome);
        getchar();
        printf("Informe o codigo do produto: ");
        scanf("%d", &Produto[i].Codigo);
        printf("Informe o preco do produto: ");
        scanf("%lf", &Produto[i].Preco);
    }

    fflush(stdin);

    for (int i = 0; i < N; i++)
    {
        printf("O produto %d tem seguintes caracteristicas:\n", i + 1);
        printf("Nome : %s\n", Produto[i].Nome);
        printf("Codigo : %d\n", Produto[i].Codigo);
        printf("Preco : %0.2lf\n", Produto[i].Preco);
    }

    printf("Deseja fazer a busca de um produto?\n");
    printf("S ou N: ");
    scanf("%c", &A);

    if (A == 'S' || A == 's')
    {
        printf("Digite o codigo do produto: ");
        scanf("%d", &Cod);

        for (int i = 0; i < N; i++)
        {
            if (Cod == Produto[i].Codigo)
            {
                printf("O preco eh de %0.2lf", Produto[i].Preco);
            }
        }
    }
    else
    {
        printf("Fim do programa.\n");
    }

    return (0);
}