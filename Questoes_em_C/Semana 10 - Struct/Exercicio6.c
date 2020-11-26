#include <stdio.h>

typedef struct
{
    int Codigo, QntEstoque;
    double PrecoUnit;

} Loja;

int main()
{
    Loja Material[10];
    int N = 0, Maior_Valor = -1000;
    double Total;

    printf("Digite quantos materiais vai colocar: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        printf("Digite o codigo do produto: ");
        scanf("%d", &Material[i].Codigo);
        printf("Digite o preco unitario do produto: ");
        scanf("%lf", &Material[i].PrecoUnit);
        printf("Digite a quantidade em estoque do produto: ");
        scanf("%d", &Material[i].QntEstoque);

        if (Material[i].QntEstoque > Maior_Valor)
        {
            Maior_Valor = Material[i].Codigo;
        }

        Total += Material[i].PrecoUnit;
    }

    for (int i = 0; i < N; i++)
    {
        printf("O produto %d tem essas informacoes:\n", i + 1);
        printf("Codigo: %d\n", Material[i].Codigo);
        printf("Preco unitario: %0.3lf\n", Material[i].PrecoUnit);
        printf("Quantidade em estoque: %d\n", Material[i].QntEstoque);
    }

    printf("O valor total eh de: %0.3lf\n", Total);
    printf("O codigo do material que representa maior valor em estoque eh: %d", Maior_Valor);

    return (0);
}