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
