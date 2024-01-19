#include <stdio.h>

int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6, 1, 3, 4};
    int num;
    int count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) 
    {
        if (arr[i] == num) 
        {
            count++;
        }
    }
    printf("The count of %d in the array is: %d\n", num, count);
}
