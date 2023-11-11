#include <stdio.h>

int binarySearch(int arr[], int n, int x) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
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

    int index = binarySearch(arr, n, x);

    if (index != -1) {
        printf("\n%d found at index %d", x, index);
    } else {
        printf("\n%d not found in array", x);
    }

    return 0;
}
