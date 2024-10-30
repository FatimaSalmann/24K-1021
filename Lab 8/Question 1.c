#include <stdio.h>
int main() {
    int start, end, num, i;

    // Input  from the user
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);
    printf("Prime numbers between %d and %d are:\n", start, end);

    // going through each number in the range
    for (num = start; num <= end; num++) {
        if (num < 2) continue; // Numbers less than 2 are not prime
        int prime = 1; // increment if number is prime

        // Check if `num` is divisible by any number from 2 up to num
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                prime = 0; // `num` is not prime
                  break;
            }
        }
        // If the number is prime, print it
        if (prime) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}
