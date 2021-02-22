/*
Begin
   Create a structure Student to declare variables.
   Open file to write.
   Check if any error occurs in file opening.
   Initialize the variables with data.
   If file open successfully, write struct using write method.
      Close the file for writing.
   Open the file to read.
   Check if any error occurs in file opening.
   If file open successfully, read the file using read method.
      Close the file for reading.
   Check if any error occurs.
   Print the data.
End.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
   int roll_no;
   char name[20];
};
int main () {
   FILE *of;
   of= fopen ("c1.txt", "w");
   if (of == NULL) {
      fprintf(stderr, "\nError to open the file\n");
      exit (1);
   }
   struct Student inp1 = {1, "Ram"};
   struct Student inp2 = {2, "Shyam"};
   fwrite (&inp1, sizeof(struct Student), 1, of);
   fwrite (&inp2, sizeof(struct Student), 1, of);
   if(fwrite != 0)
      printf("Contents to file written successfully !\n");
   else
      printf("Error writing file !\n");
   fclose (of);
   FILE *inf;
   struct Student inp;
   inf = fopen ("c1.txt", "r");
   if (inf == NULL) {
      fprintf(stderr, "\nError to open the file\n");
      exit (1);
   }
   while(fread(&inp, sizeof(struct Student), 1, inf))
      printf ("roll_no = %d name = %s\n", inp.roll_no, inp.name);
   fclose (inf);
}
