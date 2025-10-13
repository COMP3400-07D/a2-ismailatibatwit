#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * creates a new string with all lowercase letters converted to uppercase 
 * returns a string of dynamic allocation that needs to be freedsd
 */
char* capitalize(const char *s) {
    if (s == NULL) {
        return NULL;
    }
    
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    char *result = (char*)malloc((len + 1) * sizeof(char));
    if (result == NULL) {
        return NULL;
    }
    for (int i = 0; i < len; i++) {
        result[i] = toupper(s[i]);
    }
    
    // add null terminator
    result[len] = '\0';
    
    return result;
}
