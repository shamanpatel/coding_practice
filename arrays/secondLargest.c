#include <stdio.h>

int main() {
    int arr[10]; 
    int n;

   
    printf("Input the size of array: ");
    scanf("%d", &n);

    
    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }


    int firstLargest = arr[0];
    int secondLargest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } 
        
        else if (arr[i] > secondLargest && arr[i] < firstLargest) {
            secondLargest = arr[i];
        }
    }

    
    printf("The Second largest element in the array is : %d\n", secondLargest);

}

/*Input the size of array: 4
Input 4 elements in the array:
element - 0 : 52
element - 1 : 88
element - 2 : 32
element - 3 : 58
The Second largest element in the array is : 58*/
