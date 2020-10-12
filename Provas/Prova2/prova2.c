#include <stdio.h>
#include <math.h>

#define tamanho 10

int impar[10] = {0};
int par[10] = {0};

int menorvalor(int a[10])
{
    int aux = 200;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] < aux)
        {
            aux = a[i];
        }
    }
    return (pow(aux, 3));
}

int maiorvalor(int a[10])
{
    int aux = -40;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > aux)
        {
            aux = a[i];
        }
    }
    return (pow(aux, 2));
}

int inverso(int a[10])
{
    printf("O inverso do vetor e:");

    for (int i = 9; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
}

int separador(int a[10])
{
    int contadorimpar = 0, contadorpar = 0;

    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 != 0)
        {
            impar[contadorimpar] = a[i];
            contadorimpar++;
        }
        else if (a[i] % 2 == 0)
        {
            par[contadorpar] = a[i];
            contadorpar++;
        }
    }

    printf("Os valores impares sao: %d");

    for (int i = 0; i < contadorimpar; i++)
    {
        printf("%d ", impar[i]);
    }

    printf("\nOs valores pares sao: %d");

    for (int i = 0; i < contadorpar; i++)
    {
        printf("%d ", par[i]);
    }
}

int media(int a[10])
{
    double media = 0, soma = 0;

    for (int i = 0; i < 10; i++)
    {
        soma = soma + a[i];
    }

    media = (soma / 10);

    return (media);
}
int main()
{
    int vetor[tamanho] = {0};

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor:");
        scanf("%d", &vetor[i]);
    }

    printf("O cubo do menor valor e: %d\n", menorvalor(vetor));
    printf("O quadrado do maior valor e: %d\n", maiorvalor(vetor));
    printf("%d\n", inverso(vetor));
    separador(vetor);
    return 0;
}
