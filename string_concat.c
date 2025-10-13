#include <stddef.h> //for NULL

/**
 * concatenates src2 to the end of src1
 */
void string_concat(char *src1, int src1_cap, const char* src2) {
    if (src1 == NULL || src2 == NULL || src1_cap <= 0) {
        return;
    }
    
    int src1_len = 0;
    while (src1_len < src1_cap - 1 && src1[src1_len] != '\0') {
        src1_len++;
    }
    
    int space_left = src1_cap - src1_len - 1;
    
    // copy src2 to src1
    int i = 0;
    while (i < space_left && src2[i] != '\0') {
        src1[src1_len + i] = src2[i];
        i++;
    }
    
    // add null terminator
    src1[src1_len + i] = '\0';
}
