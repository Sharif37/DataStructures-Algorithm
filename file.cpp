#include <stdio.h>
#include <stdlib.h>


int main () {
   char str1[10], str2[10], str3[10];
   int year;
   FILE * fp;

   fp = fopen ("input.txt", "r");
  // fputs("We are in 2012", fp);

   //rewind(fp);
   fscanf(fp, "%d", &year);


   printf("Read Integer |%d|\n", year );

   fclose(fp);

   return(0);
}
