#include <stdio.h>
void find_max_min(int arr[], int size, int *max, int *min) {
    *max = arr[0];
    *min = arr[0];

    // lopp throught the array to find the max and min
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}
int main() {
    int n , max , min;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // Call the function to find the max and min
    find_max_min(arr, n, &max, &min);

    // Output the max and min values
    printf("The maximum value in the array is: %d\n", max);
    printf("The minimum value in the array is: %d\n", min);

    return 0;
}
