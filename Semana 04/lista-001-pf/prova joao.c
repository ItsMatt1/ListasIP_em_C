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
    for (int i = 0; i <= 9; i++)
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

    for (int i = 9; i > 0; i--)
    {
        printf("%d ", a[i]);
    }
}

int separador(int a[10])
{
    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 != 0)
        {
            impar[i] = a[i];
        }
        else if (a[i] % 2 == 0)
        {
            par[i] = a[i];
        }
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