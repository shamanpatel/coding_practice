#include <stdio.h>

int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6, 1, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Odd numbers: ");
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] % 2 != 0) 
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\nEven numbers: ");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0) 
        {
            printf("%d ", arr[i]);
        }
    }
}

