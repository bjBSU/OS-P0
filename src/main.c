#include "lab.h"
#include <stdio.h>
#include <stdlib.h>

#ifdef TEST
#define main main_exclude
#endif



int main(void)
{
    int result_add = add(5, 3);
    int result_subtract = subtract(5, 3);
    printf("Addition Result: %d\n", result_add);
    printf("Subtraction Result: %d\n", result_subtract);
    char *greeting = get_greeting("World");
    if (greeting) {
        printf("%s\n", greeting);
        free(greeting); // Free the allocated memory for the greeting
    } else {
        printf("Failed to create greeting.\n");
    }

    //multiply and incorrect Add:
    int result_multiply = multiply(5, 3);
    printf("Multiplication Result: %d\n", result_multiply);

    int result_incorrectAdd = incorrectAdd(5, 3);
    printf("Incorrect Add Result: %d\n", result_incorrectAdd);

    //memory leak
    // int* ptr = (int*)malloc(sizeof(int));//memory allocated
    // ptr = NULL;//memeory leak original pointer lost, memory not freed
    // *(int *)0 = 0; // Intentional crash for testing purposes
    return 0;
}
