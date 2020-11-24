#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int salario;

    scanf("%d", &salario);

    if (salario <= 280)
    {
        int salario_20 = (salario * 1.20);

        printf("O salário antes do reajuste eh de : %d\n", salario);
        printf("O percentual aplicado eh de : 20%%\n");
        printf("O valor do aumento eh de : %d\n", (salario_20 - salario));
        printf("O novo salario depois do aumento : %d\n", salario_20);
    }

    else if (280 < salario && salario <= 700)
    {
        int salario_15 = (salario * 1.15);

        printf("O salário antes do reajuste eh de : %d\n", salario);
        printf("O percentual aplicado eh de : 15%%\n");
        printf("O valor do aumento eh de : %d\n", (salario_15 - salario));
        printf("O novo salario depois do aumento : %d\n", salario_15);
    }

    else if (1500 >= salario && salario > 700)
    {
        int salario_10 = (salario * 1.10);

        printf("O salário antes do reajuste eh de : %d\n", salario);
        printf("O percentual aplicado eh de : 10%%\n");
        printf("O valor do aumento eh de : %d\n", (salario_10 - salario));
        printf("O novo salario depois do aumento : %d\n", salario_10);
    }

    else
    {
        int salario_5 = (salario * 1.05);

        printf("O salário antes do reajuste eh de : %d\n", salario);
        printf("O percentual aplicado eh de : 5%%\n");
        printf("O valor do aumento eh de : %d\n", (salario_5 - salario));
        printf("O novo salario depois do aumento : %d\n", salario_5);
    }

    return(0);
}