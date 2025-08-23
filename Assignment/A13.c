/*

Description:

 

Read size and array elements from the user. You need to find 3rd largest element in the array without sorting or modifying the array.
You need to pass array to the function. U need to collect array as pointer inside a function as shown below:
              int third_largest(int *arr, int size);

In function you need to find third largest element of the array and you need to return it to the main
Pre-requisites:

Arrays
Functions
Pointers
Sample Execution:
Test Case 1:
Enter the size of the Array : 5
Enter the elements into the array: 5 1 4 2 8
Third largest element of the array is 4
Test Case 2:
Enter the size of the Array : 4
Enter the elements into the array: 66 22 11 3
Third largest element of the array is 11

*/

/*
Name        : Shubham Sanjay Chaudhari
Date        : 14/08/2025
Description : Write a Program to find 3nd largest element in an array
I/O         : input : Enter the size of the Array : 4
                      Enter the elements into the array: 1 2 5 7 
              Output : third largest element of the array is 2
              
*/
#include <stdio.h>

int third_largest(int [], int);

int main()
{
    int size, ret;
    
    //Read size from the user
   // printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size];
    //printf("Enter the elements into the array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    //Read elements into the array
    
    //funtion call
    ret = third_largest(arr, size);
    
    printf("Third largest element of the array is %d\n", ret);
}

int third_largest(int *arr,int n){
    int Max = arr[0];                       //Initialize max element with Array 0th index
    int Smax;
    int Tmax;
    
    for(int i=0;i<n;i++){
        if(Max < arr[i]){                   //compare array elements with max and assign maximum value to max
            Max = arr[i];
        }
        if(Smax > arr[i]){              //check the elements with smax and assign smallest element to smax
            Smax = arr[i];
        }
    }
    
    for(int i=0;i<n;i++){
        if(Smax < arr[i] && arr[i] != Max){     //checking element for smax which is less than max and not equal to max
            Tmax = Smax;                        //assigning the value of smax to tmax 
            Smax = arr[i];                      //smax update with array element
        }else if(Tmax < arr[i] && Smax != arr[i] && Max!= arr[i]){      //check condition for third max element
            Tmax = arr[i];
        }
    }
    
    return Tmax;
}