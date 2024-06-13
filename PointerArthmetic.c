#include <stdio.h>

int main () {
 int array[5] = {10,20,30,40,50};// declare array of 5 integers
 int *ptr = &array[4]; //declare a pointer that points to the last element of the array


 // traverse the array in reverse using the pointer

 while (ptr >= array) {
   printf("%d\n",*ptr);//print the  value pointed to by ptr
    ptr--;  // move the pointer to the previous element
    
    }

    return 0;
    }
 