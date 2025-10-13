#include <stdbool.h>
#include <ctype.h>

/**
 * checks if a password meets the requirements
 *  only letters and digits
 *  at least 2 lowercase and 2 uppercase letters
 * 6  - 10
 */
bool valid_password(const char *password) {
    int length = 0;
    int lower_count = 0;
    int upper_count = 0;
    
    // check types
    for (int i = 0; password[i] != '\0'; i++) {
        char c = password[i];
        
        if (isupper(c)) {
            upper_count++;
        } else if (islower(c)) {
            lower_count++;
        } else if (isdigit(c)) {
          
        } else {
            return false; 
        }
        
        length++;
    }
    
    if (length < 6 || length > 10) {
        return false;
    }
    
    if (lower_count < 2 || upper_count < 2) {
        return false;
    }
    
    return true;
}
