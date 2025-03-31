#include <stdio.h>
#include <stdlib.h>

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate array to the right by K positions
void rotateArray(int arr[], int n, int k) {
    k = k % n; // Handle cases where k >= n

    // Step 1: Reverse entire array
    reverse(arr, 0, n - 1);
    
    // Step 2: Reverse first K elements
    reverse(arr, 0, k - 1);
    
    // Step 3: Reverse remaining elements
    reverse(arr, k, n - 1);
}

int main() {
    int n, k;
    
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

    // Read the number of positions to rotate
    if (scanf("%d", &k) != 1) {
        free(arr);
        return 1; // Exit on invalid input
    }

    // Rotate the array
    rotateArray(arr, n, k);

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr); // Free allocated memory
    return 0;
}
