#include <stdio.h>
#define MAX 5
#define LEN 80
 
char text[MAX][LEN];
 
// Um editor de texto muito simples
void main(void)
{
        register int t, i, j;
        printf("Digite SAIR para sair.\n");
        for (t = 0; t < MAX; t++){
                printf("%d: ", t);
                scanf("%s", text[t]);
                // Se encontrar comando sair, sai
                if (!strcmp(text[t], "SAIR")) break;;
        }
 
        for (i = 0; i < t; i++){
                for (j = 0; text[i][j]; j++)    putchar(text[i][j]);
                putchar('\n');
        }
}