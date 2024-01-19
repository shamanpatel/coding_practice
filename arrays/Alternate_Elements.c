#include <stdio.h>

int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6, 1, 3, 4};
    int length = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 1; i < length; i += 2) 
    {
        printf("%d ", arr[i]);
    }
}
