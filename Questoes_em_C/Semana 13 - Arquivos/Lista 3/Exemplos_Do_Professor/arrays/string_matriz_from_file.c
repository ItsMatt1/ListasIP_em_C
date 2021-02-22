//https://stackoverflow.com/questions/8975369/reading-lines-out-of-a-file-and-putting-them-into-a-string-array
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUF 128 /* can change the buffer size as well */
#define TOT 10 /* change to accomodate other sizes, change ONCE here */

int main(void) {
    char line[TOT][BUF];
    FILE *plist = NULL; 
    int i = 0;
    int total = 0;

    plist = fopen("alunos.txt", "r");
    while(fgets(line[i], BUF, plist)) {
        /* get rid of ending \n from fgets */
        line[i][strlen(line[i]) - 1] = '\0';
        i++;
    }

    total = i;

    for(i = 0; i < total; ++i)
        printf("%s\n", line[i]);

    return 0;
}
