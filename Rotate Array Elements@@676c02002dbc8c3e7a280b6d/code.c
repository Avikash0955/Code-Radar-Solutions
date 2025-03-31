#include <stdio.h>

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

// Function to remove elements 2 and 5 and print the result
void removeAndPrint(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] != 2 && arr[i] != 5) {  // Skip 2 and 5
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

// Main function
int main() {
    int n, k;
    
    // Read the size of the array
    scanf("%d", &n);
    int arr[n];

    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the number of positions to rotate
    scanf("%d", &k);

    // Rotate the array
    rotateArray(arr, n, k);

    // Remove elements 2 and 5 and print result
    removeAndPrint(arr, n);

    return 0;
}
