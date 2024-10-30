#include <stdio.h>
int main() {
    int h = 5; // Height of each parabola
    int w = 10;  // Width of each parabola
    int i, j;

    // Loop through each row
    for (i = 0; i <= h; i++) {
        // Left parabola
        for (j = 0; j <= w; j++) {
            if (j == (w / 2) - i  || j == (w/ 2) + i) { // minus for left edge and add for right edge
                printf("*"); // Print left parabola outline
            } else {
                printf(" "); // Print space
            }
        }
        // Spacing between parabolas
        for (j = 0; j < 5; j++) {
            printf(" "); // Space between parabolas
        }
        // Middle parabola
        for (j = 0; j <= w; j++) {
            if (j == (w / 2) - i || j == (w / 2) + i) {
                printf("*"); // Print middle parabola outline
            } else {
                printf(" "); // Print space
            }
        }
        // Spacing between parabolas
        for (j = 0; j < 5; j++) {
            printf(" "); // Space between parabolas
        }
        // Right parabola
        for (j = 0; j <= w; j++) {
            if (j == (w / 2) - i || j == (w/ 2) + i) {
                printf("*"); // Print right parabola outline
            } else {
                printf(" "); // Print space
            }
        }
        printf("\n"); // New line after each row
    }
    return 0;
}
