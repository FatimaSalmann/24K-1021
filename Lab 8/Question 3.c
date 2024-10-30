#include <stdio.h>
void find_saddle_point(int matrix[3][3]) {
    int saddleExists = 0 , i, j ,k ;  // Flag to check if any saddle point exists
    for ( i = 0; i < 3; i++) {
        int row = matrix[i][0];
        int col = 0;

        // locate the minelement in the current row
        for (j = 1; j < 3; j++) {
            if (matrix[i][j] < row ){
                row = matrix[i][j];
                col = j;
            }
        }
        // Check if this row minimum value is the largest in its column
        int saddle = 1;
        for (k = 0; k < 3; k++) {
            if (matrix[k][col] > row) {
                saddle = 0;
                break;
            }
        }
        // If row minimum is also the largest in its column, it's a saddle point
        if (saddle) {
            printf("Saddle point found at (%d, %d): %d\n", i, col, row);
            saddleExists = 1;
        }
    }

    if (!saddleExists) {
        printf("No saddle points found.\n");
    }
}

int main() {
    int matrix[3][3];
    int i,j;

    // Input 3x3 matrix from the user
    printf("Enter the elements of a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    // Display the matrix
    printf("\nMatrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    // Find and print saddle points
    find_saddle_point(matrix);
    return 0;
}
