/*
int-gen.c
Author: Ben Guiden
*/

/* includes */
#include <stdio.h>
#include <stdlib.h> /* a header file with a function we might need */
#include <time.h>

/* Function main
@params: argc count of command line arguments, argv a single command line argument
description: returns a list of random integers
*/

int main(int argc, char * argv[]) {
   /* Create and initalise the variables */
   int num = 0;
   num = atoi(argv[1]);

   /* We use this to get a different seed each time */
   srand(time(0));

   /* Generate random integers */
   for(int i=0; i < num; i++) {
      printf("%d\n", rand());
   }

   /* Safely exit program */
   return 0;
}