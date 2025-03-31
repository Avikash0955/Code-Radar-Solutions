#include <stdio.h>
int main(){

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

void rotateArray(int arr[], int n, int k) {
    k = k % n;
    reverse(arr, 0, n - 1);
    
    reverse(arr, 0, k - 1);
    
    reverse(arr, k, n - 1);
}
}