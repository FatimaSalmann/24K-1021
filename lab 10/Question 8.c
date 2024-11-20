#include <stdio.h>

// Recursive linear search function
int linearSearch(int arr[], int size, int target, int currentIndex) {
    // Base : If the current index is greater than or equal to size, target is not found
    if (currentIndex >= size) {
        return -1; // Target not found
    }
    // If the element at the current index matches the target, return the index
    if (arr[currentIndex] == target) {
        return currentIndex;
    }
    // Recursively search in the subsequent index
    return linearSearch(arr, size, target, currentIndex + 1);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 30; // Element to search for
    
    // Start the search from index 0
    int result = linearSearch(arr, size, target, 0);
    
    // Display the result
    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    
    return 0;
}
