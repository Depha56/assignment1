#include <stdio.h>

int main() {
    int x = 10; //Define an integer x
    int *ptr1 = &x; // Define a pointer ptr1 pointing to x
    int *ptr2 = &x; // Define another ptr2 pointing to x

    printf("initial value of x: %d\n", x);
     // Change the value of x via ptr1
    *ptr1 = 20;

    // Read the value of x via ptr2
    printf("new value of x via ptr2: %d\n", *ptr2);


    return 0;
}