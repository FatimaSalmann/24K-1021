#include <stdio.h>

// Function to perform one pass of bubble sort and recursively sort the rest
void bubbleSortRecursive(int arr[], int size) {
    // base : If the size of the array is 1, it's already sorted
    if (size == 1) {
        return;
    }
    
    //for one pass , comparing adjacent elements and swapping if necessary
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    //recursive , sort the first (size - 1) elements
    bubbleSortRecursive(arr, size - 1);
}
// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, size);

    bubbleSortRecursive(arr, size);

    printf("Sorted array: \n");
    printArray(arr, size);

    return 0;
}
