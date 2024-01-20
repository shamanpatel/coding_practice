#include <stdio.h>

int main() {
    int arr[10]; 
    int n, position;

    
    printf("Input the size of the array: ");
    scanf("%d", &n);

    
    printf("Input %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    
    printf("Input the position where to delete: ");
    scanf("%d", &position);

   
    if (position < 1 || position > n) {
        printf("Invalid position , enter the position between 1 and %d.\n", n);
        return 1; 
    }

    
    for (int i = position - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    
    printf("The new list is : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

}


/*Input the size of the array: 4
Input 4 elements in the array in ascending order:
element - 0 : 8 
element - 1 : 5
element - 2 : 2
element - 3 : 3
Input the position where to delete: 2
The new list is : 8 2 3 
*/