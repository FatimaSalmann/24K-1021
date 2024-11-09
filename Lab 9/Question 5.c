#include <stdio.h>
#include <string.h>
void reverseString(char str[]) {
    int length = strlen(str); 
    int start = 0;             
    int end = length - 1;      // End index
    char temp;                 

    // Swap characters from start to end
    while (start < end) {
        // Swap the characters at start and end
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move towards the middle
        start++;
        end--;
    }
}
int main() {
    char str[100];  
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from the string if present 
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

