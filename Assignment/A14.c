/*Description:

 

Read size and array elements from the user. You need to find 2nd largesst element in the array without sorting or modifying the array.
You need to pass array to the function. U need to collect as pointer inside a function as shown below:
              int sec_largest(int *arr, int size);

In function you need to find second largest element of the array and you need to return it to the main
Pre-requisites:

Arrays
Functions
Pointers
Sample Execution:
Test Case 1:
Enter the size of the Array : 5
Enter the elements into the array: 5 1 4 2 8
Second largest element of the array is 5
Test Case 2:
Enter the size of the Array : 4
Enter the elements into the array: 66 22 11 3
Second largest element of the array is 22
*/

/*
Name        : Shubham Sanjay Chaudhari
Date        : 13/08/2025
Description : Write a Program to find 2nd largest element in an array
I/O         : input : Enter the size of the Array : 4
                      Enter the elements into the array: 1 2 5 7 
              Output : Second largest element of the array is 5
              
*/

#include <stdio.h>

int sec_largest(int [], int);

int main()
{
    int size, ret;
    
    //Read size from the user
    //printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size];
    //printf("Enter the elements into the array :");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    //Read elements into the array
    
    //funtion call
    ret = sec_largest(arr, size);
    
    printf("Second largest element of the array is %d\n", ret);
}

int sec_largest(int* arr,int n){
    int max = arr[0];                       //initialize max and second max element with oth index of array
    int smax = arr[0];
    
    for(int i=0;i<n;i++){
        if(max<arr[i]){                     //find the maximum element from array and store in max variable
            //smax = max;
            max = arr[i];
        }    
        if(smax>arr[i]){                    //smallest value of array can be store in smax variable
            smax = arr[i];
        }
    }
    
    for(int i=0;i<n;i++){
        if(smax < arr[i] && max != arr[i]){         //checking condition to store second max element in variable
            smax = arr[i];
        }
    }
    return smax;
    
}