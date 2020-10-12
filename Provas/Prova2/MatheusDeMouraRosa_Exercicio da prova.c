#include <stdio.h>
#include <limits.h>
#include <math.h>

#define MAX 10

int maiorValor = INT_MIN, menorValor = INT_MAX, menorValor0 = 0;

int *funcaoCuboDoMenor(int a[10])
{
    for (int i = 0; i < 10; i++)
    {
        if (a[i] < menorValor)
        {
            menorValor = a[i];
        }
    }

    menorValor0 = (pow(menorValor, 3));

    return (menorValor0);
}

int funcaoQuadradoDoMaior(int a[10])
{
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > maiorValor)
        {
            maiorValor = a[i];
        }
    }

    return (pow(maiorValor, 2));
}

int imprimirOrdemInversa(int a[10])
{
    printf("\nImpressão do vetor na ordem inversa: ");

    for (int i = 9; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
}

int imprimirValores(int a[10])
{
    int vetorImpar[10] = {0};
    int vetorPar[10] = {0};
    int counterP = 0, counterI = 0;

    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            vetorPar[counterP] = a[i];
            counterP++;
        }
        if (a[i] % 2 != 0)
        {
            vetorImpar[counterI] = a[i];
            counterI++;
        }
    }

    printf("\nOs valores pares do vetor são: ");

    for (int i = 0; i < counterP; i++)
    {
        printf("%d ", vetorPar[i]);
    }

    printf("\nOs valores ímpares do vetor são: ");

    for (int i = 0; i < counterI; i++)
    {
        printf("%d ", vetorImpar[i]);
    }
}

double mediaDoVetor(int a[10])
{
    double media = 0, contadorMedia = 0, soma = 0;

    for (int i = 0; i < 10; i++)
    {
        soma = soma + a[i];
        contadorMedia++;
    }

    media = (soma / contadorMedia);

    return (media);
}

int main()
{
    int vetorA[MAX] = {0};

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetorA[i]);
    }

    imprimirValores(vetorA);
    imprimirOrdemInversa(vetorA);
    printf("\nA média dos valores do vetor é: %0.2lf\n", mediaDoVetor(vetorA));
    printf("O cubo do valor do menor elemento do vetor é: %d\n", funcaoCuboDoMenor(vetorA));
    printf("O quadrado do valor do maior elemento do vetor é: %d ", funcaoQuadradoDoMaior(vetorA));

    return (0);
}