/*
selection-sort.c
Author: Ben Guiden
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Function Prototypes */
#include "header.h"

#define BUFFERSIZE 100

int main (int argc, char *argv[])
{
   /* Create and initalise the variables */
   char buffer[BUFFERSIZE];
   fgets(buffer, BUFFERSIZE, stdin);
   int num = 0;
   num = atoi(buffer);
   int *array = (int*) malloc(sizeof(int)*num);

   /* Add inputs to array */
   for(int i = 0; i < num; i++) {
      fgets(buffer, BUFFERSIZE , stdin);
      array[i] = atoi(buffer);
   }

   /* Note time before selection sort */
   clock_t start = clock();

   /* Sort using selection sort */
   s_sort(num, array);

   /* Note time after selection sort */
   clock_t end = clock();

   /* Get time taken by subtracting the two times, double is more
   accurate than float */
   double time_taken = (double)(end - start)/CLOCKS_PER_SEC;

   /* Print duration */
   printf("Selection Sort for ");
   time_converter(time_taken, num);

   free(array);
   return 0;
}