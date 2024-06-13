#include <stdio.h>
// function to sum a specific number of values in an array  and answer will be double 
double sumArray(double *array, int numberOfElements) {

double sum = 0.0;

for (int i =0; i < numberOfElements; i++) {
    sum += array[i];
}
return sum;
}

int main() {
    double array[]= {1.5, 4.2, 3.7, 8.4,2.5};

    int numberOfElements = 3;

    double result = sumArray(array,numberOfElements);

    printf("sum of the first %d element : %.2f\n", numberOfElements,result);
}