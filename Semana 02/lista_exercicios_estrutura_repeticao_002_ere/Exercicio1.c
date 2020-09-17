#include <stdio.h>

int main()
{

    int loop_i = 0;
    double media_inserida = 0, media_maior = 0, media_menor = 100, medias_totais = 0;

    while (scanf("%lf", &media_inserida) && media_inserida >= 0)
    {
        if (media_inserida >= media_maior)
        {
            media_maior = media_inserida;
        }

        if (media_inserida <= media_menor)
        {
            media_menor = media_inserida;
        }

        medias_totais = medias_totais + media_inserida;
        loop_i++;
    }

    printf("a maior media eh %.2lf\n", media_maior);
    printf("a menor media eh %.2lf\n", media_menor);
    printf("a media aritmetica da turma eh %.2lf\n", medias_totais / loop_i);

    return (0);
}