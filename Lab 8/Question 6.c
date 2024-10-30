#include <stdio.h>
int main() {
    int rows, var = 1, space, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++) { // loo[ for each row
        for(space = 1; space <= rows - i; space++) { // print spaces
            printf("  ");
        }
        for(j = 0; j <= i; j++) { // calc and print values for rows
            if (j == 0 || i == 0)
                var = 1; // first element is 1
            else
                var = var * (i - j + 1) / j; // binomial co efficient

            printf("%4d", var);
        }
        printf("\n");
    }
    return 0;
}
