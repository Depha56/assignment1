#include <stdio.h>
 #define SUCCESS 0
 #define ERROR_NULL_POINTER -1
 #define ERROR_INVALID_NUMBER_OF_ELEMENTS -2


 //function to sum a specific number of values in an array of doubles
 int arrayAdd(double *array, int numberOfElements, double *result) {
    if(array == NULL) {
        return ERROR_NULL_POINTER;//error if array pointer is null
    }
    if (numberOfElements <= 0) {
        return ERROR_INVALID_NUMBER_OF_ELEMENTS;//error if number of element is invalid
    }

    double sum = 0.0;
    for (int i =0; i < numberOfElements; i++) {
        sum += array[i];
    }
    *result = sum;//store the result in provided pointer
    return SUCCESS;// indicate success
 }


int main(){
    double array[] = {1.5, 4.2, 3.7, 8.4,2.5};
    int numberOfElements =3;
    double result;

    int status = arrayAdd(array, numberOfElements, &result);

    if(status == SUCCESS) {
        printf("sum of the first %d elements: %.2f\n", numberOfElements, result);
    } else if (status == ERROR_NULL_POINTER) {
        printf("error: null pointer provided.\n");
    } else if (status == ERROR_INVALID_NUMBER_OF_ELEMENTS) {
        printf("error: invalid number of element.\n");
    }

    return 0;
    }