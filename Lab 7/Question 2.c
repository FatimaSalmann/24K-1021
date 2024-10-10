#include <stdio.h>
int main() {
	
    char input[20];
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    int f;

    // scanf user input
    printf("Enter a string: ");
    gets(input); 

    // Checking the vowels
    for (f = 0; input[f] != '\0'; f++) {
        if (input[f] == 'a' || input[f] == 'A') a++;
        else if (input[f] == 'e' || input[f] == 'E')
		e++;
        else if (input[f] == 'i' || input[f] == 'I') 
		i++;
        else if (input[f] == 'o' || input[f] == 'O') 
		o++;
        else if (input[f] == 'u' || input[f] == 'U') 
		u++;
    }

    // Printing the results
    printf("a=%d, e=%d, i=%d, o=%d, u=%d\n", a, e, i, o, u);
    return 0;
}
