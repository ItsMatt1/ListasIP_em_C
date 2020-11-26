#include <stdio.h>
 
char text[5][100];
 
void main(void)
{
    int i, j;
    for (i = 0; i < 5; i++){
        scanf("%[^\n]s", text[i]);
        getchar();
    }    
    printf("Os nomes cadastrados são: \n");
    for (i = 0; i < 5; i++)
        printf("%s \n",text[i]);
}