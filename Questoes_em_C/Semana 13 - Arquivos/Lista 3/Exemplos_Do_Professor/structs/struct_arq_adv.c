//http://www.wellho.net/resources/ex.php4?item=c210/lunches.c
#include <stdio.h>
#include <string.h>

/* Sample data lines
5 0 Wednesday Sunny
6 2 Thursday Wet
*/

/* Define a daydata structure */
typedef struct {
   int n_adults; 
   int n_kids;
   char day[10]; 
   char weather[10];
} daydata ;


int main() {
   daydata record[30];
   FILE * filehandle;
   char lyne[121];

   char *item;
   int reccount = 0;
   int k;

   /* Here comes the actions! */
   /* open file */

   filehandle = fopen("newstuff.txt","r");

   /* Read file line by line */

   while (fgets(lyne,120,filehandle)) {
      printf("%s",lyne);

      item = strtok(lyne," ");
      record[reccount].n_adults = atoi(item);

      item = strtok(NULL," ");
      record[reccount].n_kids = atoi(item);

      item = strtok(NULL," ");
      strcpy(record[reccount].day,item);

      item = strtok(NULL,"\n");
      strcpy(record[reccount].weather,item);

      printf("%s\n",record[reccount].day);
      reccount++;
   }

/* Close file */

fclose(filehandle);

/* Loop through and report on data */

printf("Weather Record\n");
for (k=0; k<reccount; k++) {
        printf("It is %s\n",record[k].weather);
        }

}

