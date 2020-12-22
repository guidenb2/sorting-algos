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
   for(int i=0; i < size; i++) {
      arr[i] = rand();
   }

   /* Safely exit program */
   return;
}


/* Sorts array by selection sort */
void s_sort(int size, int *arr) {
   for(int i=0; i < size; i++) {
      int min = i;
      int temp = 0;
      for (int j = i + 1; j < size; j++) 
         if (arr[j] < arr[min]) 
            min = j;
      temp = arr[min];
      arr[min] = arr[i];
      arr[i] = temp;
   }

   /* Safely exit program */
   return;
}
