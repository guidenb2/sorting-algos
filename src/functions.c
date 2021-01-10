/*
functions.c
Author: Ben Guiden
*/

/* includes */
#include <stdio.h>
#include <stdlib.h> /* a header file with a function we might need */
#include <time.h>

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

int partition(int *arr, int lo, int hi) {
   int tmp = 0;
   int part = arr[hi];
   int i = lo - 1;
   for(int j = lo; j <= hi - 1; j++) {
      if(arr[j] <= part) {
         i++;
         tmp = arr[i];
         arr[i] = arr[j];
         arr[j] = tmp;
      }
   }
   tmp = arr[i + 1];
   arr[i + 1] = arr[hi];
   arr[hi] = tmp;
   return i + 1;
}

int rand_pivot(int *arr, int lo, int hi) {
   int tmp = 0;
   srand(time(0));
   int pivot = lo + rand() % (hi - lo);
   tmp = arr[pivot];
   arr[pivot] = arr[hi];
   arr[hi] = tmp;
   return partition(arr, lo, hi);
}

/* Sort by quick sort */
void q_sort(int *arr, int lo, int hi) {
   if (lo < hi)
   {
      int pivot = rand_pivot(arr, lo, hi);
      q_sort(arr, lo, pivot - 1);
      q_sort(arr, pivot + 1, hi);
   }
}

/* Convert seconds to hours, minutes and seconds */
void time_converter(double time, int num) {
   int hours = 0;
   int minutes = 0;
   double seconds = 0;
   int remaining = 0;
   hours = time / 3600;
   remaining = time - (hours * 3600);
   minutes = remaining / 60;
   remaining -= minutes * 60;
   seconds = time - ((hours * 3600) + (minutes * 60));
   printf("%d numbers took %d hours %d minutes %.2f seconds\n", num, hours, minutes, seconds);
   return;
}