#include <stdio.h>

int main()
{
    int valor_do_produto, valor_do_prod_menor_que_20, valor_do_prod_maior_que_20;

    scanf("%d", &valor_do_produto);

    valor_do_prod_menor_que_20 = (valor_do_produto * 1.45);

    valor_do_prod_maior_que_20 = (valor_do_produto * 1.30);

    if (valor_do_produto < 20)
    {
        printf("O valor da venda com lucro será de : %d", valor_do_prod_menor_que_20);
    }

    else
    {
        printf("O valor da venda com lucro será de %d", valor_do_prod_maior_que_20);
    }

    return(0);
}