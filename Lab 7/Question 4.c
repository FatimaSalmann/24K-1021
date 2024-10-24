#include <stdio.h>
int main() {
    char str[100];  
    char *start, *end, transition; // Pointers for start and end of the string
    int length = 0; 
    
    printf("Enter a string: ");
    scanf("%[^\n]", str); // get string till a new line char

    // Remove the newline character if it exists
    if (str[length] != '\0') {
        while (str[length] != '\0') {
            length++; 
        }
        if (str[length - 1] == '\n') {
            str[length - 1] = '\0'; // Remove the newline character
            length--; // Decrease length to account for the removed character
        }
    }
    start = str;                 // Pointer to the start of the string
    end = str + length - 1;     // Points to last char

    // Reverse the string
    while (start < end) {
        // Swap the characters at start and end
        transition = *start;
        *start = *end;
        *end = transition;

        // Move the pointers to the same place
        start++;
        end--;
    }

    // Display the length and reversed string
    printf("Length of the string: %d\n", length);
    printf("Reversed string: %s\n", str);

    return 0;
}
