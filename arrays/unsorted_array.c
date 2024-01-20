#include <stdio.h>

int main() {
    int arr[10]; 
    int n, i, newValue, position;

    
    printf("Input the size of the array: ");
    scanf("%d", &n);
    
    
    printf("Input %d elements in the array in ascending order:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    
    printf("Input the value to be inserted: ");
    scanf("%d", &newValue);

    
    printf("Input the Position, where the value to be inserted: ");
    scanf("%d", &position);

    
    for (i = n - 1; i >= position - 1; i--) {
        arr[i + 1] = arr[i];
    }

    
    arr[position - 1] = newValue;
    n++;

   
    printf("The new list of the array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    
}


/*Input the size of the array: 5
Input 5 elements in the array in ascending order:
element - 0 : 12
element - 1 : 55
element - 2 : 88
element - 3 : 32
element - 4 : 60 
Input the value to be inserted: 102
Input the Position, where the value to be inserted: 3
The current list of the array:
12 55 102 88 32 60 
*/