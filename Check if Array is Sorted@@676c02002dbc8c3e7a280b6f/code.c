#include <stdio.h>
#include <stdlib.h>

// Function to check if the array is sorted in non-decreasing order
int isArraySorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return 0; // Return 0 if array is not sorted
        }
    }
    return 1; // Return 1 if array is sorted
}

int main() {
    int n;

    // Read the size of the array
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;  // Exit on invalid input
    }

    int *arr = (int *)malloc(n * sizeof(int)); // Dynamic memory allocation

    // Read the array elements
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            free(arr);
            return 1; // Exit on invalid input
        }
    }

    // Check if the array is sorted
    if (isArraySorted(arr, n)) {
        printf("1\n"); // Array is sorted
    } else {
        printf("0\n"); // Array is not sorted
    }

    free(arr); // Free allocated memory
    return 0;
}
