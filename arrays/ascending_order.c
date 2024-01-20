#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 1, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]); //(size of arr = 40 bytes and size of arr[0] = 4 bytes.)

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

   
    printf("Sorted Array in Ascending Order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
