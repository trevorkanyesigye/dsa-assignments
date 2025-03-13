#include <stdio.h>

void deleteElement(int arr[], int *n, int position) {
    if (position >= *n || position < 0) {
        printf("Invalid position!\n");
        return;
    }

    for (int i = position; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    // Delete element at the beginning
    deleteElement(arr, &n, 0);
    printf("After deleting element at the beginning: ");
    printArray(arr, n);

    // Delete element at the end
    deleteElement(arr, &n, n - 1);
    printf("After deleting element at the end: ");
    printArray(arr, n);

    // Delete element at a specific position
    deleteElement(arr, &n, 1);
    printf("After deleting element at position 1: ");
    printArray(arr, n);

    return 0;
}