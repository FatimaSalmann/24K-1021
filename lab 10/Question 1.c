#include <stdio.h>
// Recursive function to print array elements
void printArray(int arr[], int size) {
    //  if size is 0, return (no elements left to print)
    if (size == 0) {
        return;
    }
    printf("%d ", arr[0]);
    
    // Recursively call printArray with the rest of the array and decreased size
    printArray(arr + 1, size - 1);
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};  
    int size = sizeof(arr) / sizeof(arr[0]);  
    
    // Call the recursive function
    printArray(arr, size);
    return 0;
}
