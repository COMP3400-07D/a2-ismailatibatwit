#include <stddef.h> // for NULL

/**
 * fills an array with numbers from begin to end in increasing order
 * returns the number of elements actually filled
 */
int array_fill(int *array, int array_len, int begin, int end) {
    if (array == NULL || array_len <= 0) {
        return 0;
    }
    
    int current = begin;
    int filled = 0;
    
    // fill until we reach the end
    while (filled < array_len && current <= end) {
        array[filled] = current;
        filled++;
        current++;
    }
    
    return filled;
}
