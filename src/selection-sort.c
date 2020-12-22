/*
selection-sort.c
Author: Ben Guiden
*/

#include <stdio.h>
#include <stdlib.h>

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

   /* Sort using selection sort */
   /* s_sort(num, array); */

   /* Print */
   printf("\nSorted:\n");
   for(int i=0; i < num; i++) {
      printf("%d\n", array[i]);
   }

   free(array);
   return 0;
}