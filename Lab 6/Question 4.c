#include <stdio.h>
int main() {
    int num, userNum, rem, result = 0;
  // user input
    printf("Enter an integer: ");
    scanf("%d", &num);
	userNum = num;

    // sum of the cubes of its digits
    while ( userNum!= 0) {
        rem =  userNum % 10;        // Get the last digit
        result += rem * rem * rem;     // Cube the digit and add to result
         userNum /= 10;            // separate the last digit
    }
    // Check if the number is an Armstrong number
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}
