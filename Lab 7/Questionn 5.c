#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; 
    int length,p=1; // Variable to hold the length and palindrome check

    printf("Enter a string: ");
    scanf("%s", str); 

    // Calculate the length of the string
    length = strlen(str);

    // Check for palindrome by comparing characters from both ends
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) { 
            p = 0; // Not a palindrome if characters don't match
            break;
        }
    }

    // Output the result
    if (p) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
