#include <stddef.h> // For NULL

/**
 * fills a string with characters
 * leaves room for null terminator
 */
void string_fill(char *dest, int dest_cap, char c) {
    if (dest == NULL || dest_cap <= 0) {
        return;
    }
    
    int chars_to_fill = dest_cap - 1;
    for (int i = 0; i < chars_to_fill; i++) {
        dest[i] = c;
    }
    
    //null terminator
    dest[chars_to_fill] = '\0';
}
