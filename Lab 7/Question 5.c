// incomplete

#include<stdio.h>
int main(){
	char str[100];
	char reversed[100];
	int length=0;
	char ch;
	int is_palindrome , i;
	 
	//inputand condition for string
	printf("Enter string");
	scanf("%c",&ch);
	   while(ch !='\n' && length<99)
	   {
	   	str[length]=ch;
	   	length++;
	   }
	   str[length]=0; // terminating string
	   
	    for (int i = 0; i < length; i++) { // reverse string
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0';
    is_palindrome=1;
      for (i=0 ;i< length; i++){
      	if (str[i] != reversed[i]) {
            is_palindrome = 0; // Set to false if not equal
            break;
        }
    }
    // output results
	  if (is_palindrome) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
