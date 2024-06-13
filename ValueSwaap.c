#include <stdio.h>

//Function to swap two integer values

void swapValues(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int value1 = 35;
    int value2 = 12;


    printf("Before swap: value1 = %d, value2 = %d\n", value1, value2);

    //Call swapValues function

    swapValues(&value1, &value2);

    printf("After swap: value1 = %d, value2 = %d\n", value1, value2);

    return 0;
}