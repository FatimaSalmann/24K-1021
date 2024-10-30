#include <stdio.h>
int main() {
    int rows, i, j, space;

    // Input number of rows for the upper half 
    printf("Enter the number of rows for the upper half of the diamond: ");
    scanf("%d", &rows);

    // Upper half of the diamond
    for (i = 1; i <= rows; i++) {
        // Print front spaces
        for (space = 1; space <= rows - i; space++) { 
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    // Lower half of the diamond
    for (i = rows - 1; i >= 1; i--) {
        // Print front spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
