#include<stdio.h>

int main(void)
{

    int i,j;
    int valor[2][5]; //= {{1,2,3,4,5},{6,7,8,9,10}};

    printf("Informe os valores da matriz:\n");
    for(i = 0; i < 2; i ++){
        for(j = 0; j < 5; j++){
            scanf("%d",&valor[i][j]);
        }
    }

    printf("Os valores da matriz são:\n");
    for(i = 0; i < 2; i ++){
        for(j = 0; j < 5; j++){
            printf("%d ",valor[i][j]);
        }
        printf("\n");
    }

    return 0;
}