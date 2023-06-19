/*#include<stdio.h>

int main()
{
    int n, i, j, arr[100], temp;

    printf("Enter the array size: ");
    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for (i=0; i<n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    for (i=0; i<n; i++)
        printf("%d ", arr[i]);

    return 0;
}*/

#include <stdio.h>

void reverseArray(int arr[], int start, int end) {
    // Base case: when start and end meet or cross each other
    if (start >= end) {
        return;
    }

    // Swap elements at start and end positions
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // Recursively reverse the remaining array
    reverseArray(arr, start + 1, end - 1);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    // Reverse the array recursively
    reverseArray(arr, 0, size - 1);

    printf("Reversed array: ");
    printArray(arr, size);

    return 0;
}