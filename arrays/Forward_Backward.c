#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 1, 3, 4};
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("Forward: ");
    for (int i = 0; i < length; i++) 
    {
        printf("%d ", arr[i]);
    }
    
    printf("\nBackward: ");
    for (int i = length - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}
