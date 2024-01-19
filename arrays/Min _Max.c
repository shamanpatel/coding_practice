#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 1, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < n; i++) 
    {
        if (arr[i] < min) 
        {
            min = arr[i];
        }
        
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Minimum element in the array: %d\n", min);
    printf("Maximum element in the array: %d\n", max);
}
