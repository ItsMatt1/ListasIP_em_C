#include <stdio.h>
#include <limits.h>

int main()
{
    int vetorNumero[10] = {0}, vetorAltura[10] = {0}, nMaior = 0, nMenor = 0;
    int valorMaior = INT_MIN, valorMenor = INT_MAX;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetorNumero[i]);
        scanf("%d", &vetorAltura[i]);

        if (vetorAltura[i] > valorMaior)
        {
            valorMaior = vetorAltura[i];
            nMaior = vetorNumero[i];
        }
        if (vetorAltura[i] < valorMenor)
        {
            valorMenor = vetorAltura[i];
            nMenor = vetorNumero[i];
        }
    }

    printf("O numero do aluno mais alto eh : %d e sua aultura eh : %d\n", nMaior, valorMaior);
    printf("O numero do aluno mais baixo eh : %d e sua aultura eh : %d", nMenor, valorMenor);

    return (0);
}