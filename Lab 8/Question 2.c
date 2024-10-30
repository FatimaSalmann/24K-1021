#include <stdio.h>
int main() {
    int N, start;
    printf("Enter the number of pairs (N): ");
    scanf("%d", &N);
    printf("Enter the starting number: ");
    scanf("%d", &start);
    int arr[2][N][2];
    int i;

    //add even numbers array
    int even = start;
    if (even % 2 != 0) {
        even--; // Make even if starting number is odd
    }
    for (i = 0; i < N; i++) {
        arr[0][i][0] = even;
        arr[0][i][1] = even - 2;
        even -= 4;
    }
    // add odd numbers array
    int odd = start;
    if (odd % 2 == 0) {
        odd--; // Make numver odd odd if starting number is even
    }
    for (i = 0; i < N; i++) {
        arr[1][i][0] = odd;
        arr[1][i][1] = odd - 2;
        odd -= 4;
    }
    // Display the array
    printf("Even numbers array:\n");
    for (i = 0; i < N; i++) {
        printf("[%d, %d]\n", arr[0][i][0], arr[0][i][1]);
    }
    printf("\nOdd numbers array:\n");
    for (i = 0; i < N; i++) {
        printf("[%d, %d]\n", arr[1][i][0], arr[1][i][1]);
    }
    return 0;
}
