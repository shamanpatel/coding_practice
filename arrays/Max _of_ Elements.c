/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>    
     
int main()    
{    
    int arr[] = {1, 10, 72, 43, 102, 12, 85};      
    int length = sizeof(arr)/sizeof(arr[0]);    
    int max = arr[0];    
        
    for (int i = 0; i < length; i++)
    {     
       if(arr[i] > max)
       {   
           max = arr[i]; 
       }   
    }      
    printf("Largest value is: %d\n", max);    
      
}    