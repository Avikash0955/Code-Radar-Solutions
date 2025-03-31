#include <stdio.h>
#include <stdlib.h>

// Function to count even and odd numbers in an array
void countEvenOdd(int arr[], int n, int *evenCount, int *oddCount) {
    *evenCount = 0;
    *oddCount = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            (*evenCount)++;
        } else {
            (*oddCount)++;
        }
    }
}

int main() {
    int n;
    
    // Read the size of the array
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int)); // Dynamic memory allocation

    // Read the array elements
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input\n");
            free(arr);
            return 1;
        }
    }

    int evenCount, oddCount;
    countEvenOdd(arr, n, &evenCount, &oddCount);

    // Print even and odd count
    printf("%d %d\n", evenCount, oddCount);

    free(arr); // Free allocated memory
    return 0;
}
