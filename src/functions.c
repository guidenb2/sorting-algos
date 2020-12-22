/*
functions.c
Author: Ben Guiden
*/

/* includes */
#include <stdio.h>
#include <stdlib.h> /* a header file with a function we might need */
#include <time.h>


/* Generates a random integer array of length size */
void generator(int size, int *arr) {

   /* We use this to get a different seed each time */
   srand(time(0));

   /* Generate random integer array */
   printf("Your list:\n");
   for(int i=0; i < size; i++) {
      arr[i] = rand();
   }

   for(int i=0; i < size; i++) {
      printf("%d\n", arr[i]);
   }

   /* Safely exit program */
   return;
}