/*
insertion-sort.c
Author: Ben Guiden
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Function Prototypes */
#include "generator-header.h"

int main (int argc, char *argv[])
{
   /* Create and initalise the variables */
   FILE * fp;
   int num = 0;
   num = atoi(argv[1]);
   int *array = (int*) malloc(sizeof(int)*num);

   /* open the file for writing*/
   fp = fopen ("../test/unsorted.txt","w");

   /* Use number generator */
   unsorted_num_generator(num, array);

   /* Make first line the length of the array */
   fprintf(fp, "%d\n", num);

   /* Print the array into the file */
   for(int i = 0; i < num; i++) {
      fprintf(fp, "%d\n", array[i]);
   }

   /* close the file*/  
   fclose(fp);

   fp = fopen("../test/sorted.txt", "w");
   sorted_num_generator(num, fp);
   fclose(fp);

   fp = fopen("../test/reversed.txt", "w");
   reversed_num_generator(num, fp);
   fclose(fp);

   free(array);
   return 0;
}
