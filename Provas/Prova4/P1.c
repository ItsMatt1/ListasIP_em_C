#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N = 0;
    int Tam, i, j;

    scanf("%d", &N);

    char Buffer[1000];
    char **String;

    String = (char **)malloc(N * sizeof(char *));

    for (i = 0; i < N; i++)
    {
        scanf(" %[^\n]s", Buffer);

        String[i] = (char *)malloc((strlen(Buffer) + 1) * sizeof(char));

        strcpy(String[i], Buffer);
    }

    for (i = 0; i < N; i++)
    {
        printf("%s\n", String[i]);
    }

    return (0);
}