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

/* Sort by insertion sort */
void i_sort(int size, int *arr) {
   /* init the variables */
   int curr = 0;
   int j = 0;
   /* Sort */
   for(int i=1; i < size; i++) {
      curr = arr[i];
      j = i - 1;
      while (j >= 0 && arr[j] > curr) {
         arr[j+1] = arr[j];
         j--;
      }
      arr[j+1] = curr;
   }
   /* Safely exit program */
   return;
}

/* Sort by bubble sort */ 
void b_sort(int size, int *arr) {
   /* init the variables */
   int prev = 0;
   int tmp = 0;
   for(int i = 0; i < size; i++) {
      for(int curr = 1; curr < size; curr++) {
         prev = curr - 1;
         if(arr[prev] > arr[curr]) {
            tmp = arr[prev];
            arr[prev] = arr[curr];
            arr[curr] = tmp;
         }
      }
   }
   /* Safely exit program */
   return;
}

/* Convert seconds to hours, minutes and seconds */
void time_converter(double time, int num) {
   int hours = 0;
   int minutes = 0;
   int seconds = 0;
   int remaining = 0;
   hours = time / 360;
   remaining = time - (hours * 360);
   minutes = remaining / 60;
   remaining -= minutes * 60;
   seconds = remaining;
   printf("Sorting %d numbers took %d hours %d minutes %d seconds\n", num, hours, minutes, seconds);
   return;
}