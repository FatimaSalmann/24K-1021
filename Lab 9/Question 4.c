#include <stdio.h>
float calculate(float num1, float num2, char operation) {
    float result;

    switch (operation) {
        case '+':
            result = num1 + num2;  
            break;
        case '-':
            result = num1 - num2;  
            break;
        case '*':
            result = num1 * num2; 
            break;
        case '/':
            // Check if the second number is 0 to prevent division by zero
            if (num2 != 0) {
                result = num1 / num2;  
            } else {
                printf("Error! Division by zero.\n");
                result = 0;  // Return 0 if division by zero
            }
            break;
        default:
            printf("Invalid operation!\n");
            result = 0;  // Return 0 for invalid operation
            break;
    }
    return result;
}
int main() {
    float num1, num2, result;
    char operation;
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);  // Add a space before %c to consume any leading newline

    // Call the calculate function
    result = calculate(num1, num2, operation);
