#include<stdio.h>
int main() {
    int arr[10];
    int freq[10] = {0}; // Array to store the frequency of each element
    int i, j;
    int count;
    
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // Calc the freq of each element
    for (i = 0; i < 10; i++) {
        count = 1; // Start counting from 1 for the current element

        // Skip counting if this element is alr counted
        if (freq[i] != -1) {
            for (j = i + 1; j < 10; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = -1; //  to avoid double-counting
                }
            }
            freq[i] = count; // Store the count for the current element
        }
    }
    // Display the frequency of each diff element
    printf("\nFrequency of each element:\n");
    for (i = 0; i < 10; i++) {
        if (freq[i] != -1) { // Only display unique elements
            printf("%d occurs %d time(s)\n", arr[i], freq[i]);
        }
    }
    return 0;
}

