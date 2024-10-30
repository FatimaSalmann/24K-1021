#include <stdio.h>
void inputMatrix(int matrix[3][3], char name) {
	int i,j;
    printf("Enter elements of Matrix %c (3x3):\n", name);
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}
void multiplyMatrices(int A[3][3], int B[3][3], int result[3][3]) {
	int i,j,k;
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            result[i][j] = 0;
            for (k= 0; k < 3; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
void subtractMatrices(int A[3][3], int result[3][3], int subtract[3][3]) {
	int i,j;
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            subtract[i][j] = A[i][j] - result[i][j];
        }
    }
}
void displayMatrix(int matrix[3][3], char name) {
	int i,j;
    printf("Matrix %c:\n", name);
    for (i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int A[3][3], B[3][3], product[3][3], subtract[3][3];
    inputMatrix(A, 'A');
    inputMatrix(B, 'B');

    // Multiply matrices A and B
    multiplyMatrices(A, B, product);

    // Subtract the product from Matrix A
    subtractMatrices(A, product, subtract);

    // Displaying all matrices
    displayMatrix(A, 'A');
    displayMatrix(B, 'B');
    displayMatrix(product, 'Product (A * B)');
    displayMatrix(subtract, 'Subtraction Result (A - Product)');
    return 0;
}
