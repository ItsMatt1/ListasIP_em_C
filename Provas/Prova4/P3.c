#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int NumConcurso;
    int NumeroConcurso[6];

} CARTELA_PREMIADA;

typedef struct
{
    int numJogo;
    int numero[6];

} CARTELA;

int main()
{
    CARTELA *Cart;
    CARTELA_PREMIADA CartPremiada;
    int N = 0, Counter = 0, i, j, w, Count = 0, Counter2 = 0, h;
    int Vetor[7];

    scanf("%d", &N);

    Cart = (CARTELA *)malloc(N * sizeof(CARTELA));

    // Pegar as entradas do jogo

    for (i = 0; i < N; i++)
    {
        scanf("%d %d %d %d %d %d %d", &Cart[i].numJogo, &Cart[i].numero[0], &Cart[i].numero[1], &Cart[i].numero[2], &Cart[i].numero[3], &Cart[i].numero[4], &Cart[i].numero[5]);
    }

    // Pegar o numero do concurso e os numeros premiados

    scanf("%d %d %d %d %d %d %d", &CartPremiada.NumConcurso, &CartPremiada.NumeroConcurso[0], &CartPremiada.NumeroConcurso[1], &CartPremiada.NumeroConcurso[2], &CartPremiada.NumeroConcurso[3],
          &CartPremiada.NumeroConcurso[4], &CartPremiada.NumeroConcurso[5]);

    // Verificar se existe algum numero que a pessoa digitou igual a algum numero premiado, coluna por coluna, depois linha por linha

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (w = 0; w < 6; w++)
            {
                if (CartPremiada.NumeroConcurso[w] == Cart[i].numero[j])
                {
                    Vetor[0] = Cart[i].numJogo;
                    Vetor[Count + 1] = Cart[i].numero[j];
                    Count++;
                    Counter++;
                }
            }
        }

        if (Counter == 4)
        {
            printf("QUADRA %d: ", Cart[i].numJogo);
            for (h = 0; h < Count; h++)
            {
                printf("%d ", Vetor[h + 1]);
            }
            puts("");
            Counter2++;
        }

        else if (Counter == 5)
        {
            printf("QUINA %d: ", Cart[i].numJogo);
            for (h = 0; h < Count; h++)
            {
                printf("%d ", Vetor[h + 1]);
            }
            puts("");
            Counter2++;
        }
        else if (Counter == 6)
        {
            printf("SENA %d: ", Cart[i].numJogo);
            for (h = 0; h < Count; h++)
            {
                printf("%d ", Vetor[h + 1]);
            }
            puts("");
            Counter2++;
        }
        else if ((i == N - 1) && Counter2 == 0)
        {
            printf("NENHUMA CARTELA PREMIADA PARA O CONCURSO %d\n", CartPremiada.NumConcurso);
            break;
        }
        Count = 0;
        Counter = 0;
    }

    free(Cart);

    return (0);
}