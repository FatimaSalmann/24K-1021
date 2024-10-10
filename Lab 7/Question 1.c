#include <stdio.h>
int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    int last_element;

    // original array
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Store the last number
    last_element = arr[size - 1];

    // Shifting numbers to the right
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // chaning the position of the last number
    arr[0] = last_element;

    // Printing the updates array
    printf("Array after shifting: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
