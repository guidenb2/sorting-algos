/*
generator.h
Author: Ben Guiden
*/

/* includes */
#include <stdio.h>
#include <stdlib.h> /* a header file with a function we might need */
#include <time.h>


/* Generates a random integer array of length size */
void unsorted_num_generator(int size, int *arr) {

   /* We use this to get a different seed each time */
   srand(time(0));

   /* Generate random integer array */
   for(int i=0; i < size; i++) {
      arr[i] = rand();
   }

   /* Safely exit program */
   return;
}

void sorted_num_generator(int size, FILE *fp) {
   fprintf(fp, "%d\n", size);
   for(int i=1; i < size + 1; i++) {
      fprintf(fp, "%d\n", i);
   }
}

void reversed_num_generator(int size, FILE *fp) {
   fprintf(fp, "%d\n", size);
   for(int i=size; i > 0; i--) {
      fprintf(fp, "%d\n", i);
   }
}