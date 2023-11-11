#include <stdio.h>

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }

    return -1;
}

int main() {
    int arr[] = { 1, 3, 5, 7, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;

    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int index = linearSearch(arr, n, x);

    if (index != -1) {
        printf("\n%d found at index %d", x, index);
    } else {
        printf("\n%d not found in array", x);
    }

    return 0;
}
