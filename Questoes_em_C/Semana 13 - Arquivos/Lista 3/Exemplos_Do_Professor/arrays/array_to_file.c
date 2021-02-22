//https://cboard.cprogramming.com/c-programming/177068-how-save-array-file.html

#include <stdio.h>
#include <string.h>

char *a[2] = {"130123456789", "2"};

int main(int argc, char *argv[])
{

    printf("\n a[0] = %s", a[0]);
    printf("\n a[1] = %s", a[1]);

    // ====================================================

    FILE *file_01;

    if ((file_01 = fopen("OUT_a.txt", "w")) == NULL)
    {
        printf("CANNOT OPEN FILE OUT_a.txt 'w'\n");
        exit(1);
    };

    printf("\n strlen(a[0]) = %i", strlen(a[0]));
    printf("\n strlen(a[1]) = %i", strlen(a[1]));

    //int t1 = fwrite(*a, (strlen(a[0])+strlen(a[1])), 1, file_01);
    fprintf(file_01, "%s\n%s\n", a[0], a[1]);

    //printf("\n t1 = %i", t1);

    fclose(file_01);

    // ====================================================

    printf("\n\nFINISH!\n");

    return 0;
}