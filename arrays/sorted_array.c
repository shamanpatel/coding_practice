#include <stdio.h>

int main() {
    int arr[10]; 
    int n, i, newValue;

    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the sorted array elements:\n");
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the value to be inserted: ");
    scanf("%d", &newValue);

    
    for (i = n - 1; i >= 0 && arr[i] > newValue; i--) {
        arr[i + 1] = arr[i];
    }

    
    arr[i + 1] = newValue;
    n++;

    
    printf("Updated array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

}

//Enter the size of the array: 5
//Enter the sorted array elements: 12 25 42 85 45

//Enter the value to be inserted: 32
//Updated array after insertion: 12 25 32 42 85 45 

