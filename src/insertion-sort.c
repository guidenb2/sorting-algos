/*
insertion-sort.c
Author: Ben Guiden
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Function Prototypes */
#include "header.h"

int main (int argc, char *argv[])
{
   /* Create and initalise the variables */
   int num = 0;
   num = atoi(argv[1]);
   int *array = (int*) malloc(sizeof(int)*num);

   /* Use number generator */
   generator(num, array);

   /* Note time before insertion sort */
   clock_t start = clock();

   /* Sort using insertion sort */
   i_sort(num, array);

   /* Note time after insertion sort */
   clock_t end = clock();

   /* Get time taken by subtracting the two times, double is more
   accurate than float */
   double time_taken = (double)(end - start)/CLOCKS_PER_SEC;

   printf("Number of integers: %d\nTime taken: %.3f seconds\n", num, time_taken);

   free(array);
   return 0;
}
