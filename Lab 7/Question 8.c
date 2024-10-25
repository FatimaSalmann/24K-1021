#include<stdio.h>
int main(){
	char exp[100];
	char prevOp = '+';
	int result=0 , num=0 ;
	int i=0;
	
	// taking input for expression
	printf("Enter an arithmetic expression (only + and - operations): ");
    scanf("%s", &exp);
    
    // evaluating the exp
    while ( exp[i] != '\0'){
    	
        // if the current character is a digit
        if (exp[i] >= '0' && exp[i] <= '9') {
            num = num * 10 + (exp[i] - '0');  // then build the number from digits ( exp[i]-'0' is used to convert 'number' to its ASCII equal)
        } 
        else if (exp[i] == '+' || exp[i] == '-') {
            // Perform the previous operation
            if (prevOp == '+') {
                result += num;
            } else if (prevOp == '-') {
                result -= num;
            }
     // Update the operator and reset num
            prevOp = exp[i];
            num = 0;  // Reset num for the next int
        } 
        else {
            printf("Invalid expression: Unsupported character.\n");
            return 1;
        }
        i++;
    }
         // Perform the last operation
    if (prevOp == '+') {
        result += num;
    } else if (prevOp == '-') {
        result -= num;
    } else {
        printf("Invalid expression.\n");
        return 1;
    }
    // Output the result
    printf("Result: %d\n", result);
    return 0;
}
