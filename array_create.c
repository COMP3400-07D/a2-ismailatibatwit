#include <stddef.h> 
#include <stdlib.h>
/**
 * creates an array of even numbers between begin and end (inclusive)
 * returns a pointer to the allocated array or NULL if no even numbers in range
 */
int* array_create_evens(int begin, int end) {
    if (begin > end) {
        return NULL;
    }
    
    int first_even = begin;
    if (first_even % 2 != 0) {
        first_even++;
    }
    
    // check  for even
    if (first_even > end) {
        return NULL;
    }
    
    int count = ((end - first_even) / 2) + 1;
    
    int* result = (int*)malloc(count * sizeof(int));
    if (result == NULL) {
        return NULL; 
    }

    for (int i = 0; i < count; i++) {
        result[i] = first_even + (2 * i);
    }
    
    return result;
}
