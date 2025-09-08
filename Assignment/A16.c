/*

Description:

Read n and n no.of elements from user and store them into an array.
Run a loop for printing the elements in sorted order.
Pr-requisites:-

Functions
Arrays
Pointers
Objective: -

To understand the concept of
Functions, Arrays, and Pointers
Inputs: -
            Array on N integer, N
Sample execution: -
Test Case 1:
user@emertxe] ./sort
Enter the size : 5
Enter 5 elements 
10 1 3  8 -1
After sorting: -1 1 3 8 10
Original array values 10 1 3 8 -1

Test Case 2:
user@emertxe] ./sort
Enter the size : 7
Enter 7 elements 
1 3 2 5 4 7 6
After sorting: 1 2 3 4 5 6 7
Original array values 1 3 2 5 4 7 6

Test Case 3:
user@emertxe] ./sort
Enter the size : 4
Enter 4 elements 
-1 -2  4 3
After sorting: -2 -1 3 4
Original array values -1 -2  4 3

*/

/*
Name        : Shubham Sanjay Chaudhari
Date        : 14/08/2025
Description : Write a Program to find 2nd largest element in an array
I/O         : input : Enter the size of the Array : 4
                      Enter the elements into the array: 1 2 5 7 
              Output : Second largest element of the array is 5
              
*/

#include <stdio.h>

void print_sort(int [], int);
int smallest(int [],int);
int largest(int [],int);
int main()
{
    int size, iter;
    
    //printf("Enter the size of the array : ");
    scanf("%d", &size);
    
    int arr[size];
    
    //printf("Enter the %d elements\n",size);
    for (iter = 0; iter < size; iter++)
    {
        scanf("%d", &arr[iter]);
    }
    
    print_sort(arr, size);
}

int smallest(int *arr,int n){
    int smallest = arr[0];                  //loop to find smallest element from an array
    for(int i=0;i<n;i++){
        if(smallest > arr[i]){
            smallest = arr[i];
        }
    }
    return smallest;
}

int largest(int *arr,int n){
    int largest = arr[0];
    for(int i=0;i<n;i++){               //loop to find the largest element from an array
        if(largest < arr[i]){
            largest = arr[i];
        }
    }
    return largest;
}

void print_sort(int *arr,int n){
    int smallest1 = smallest(arr,n);        //smallest value can be store
    int largest1 = largest(arr,n);          //largest element can store in variable
    printf("After sorting : ");
    printf("%d ",smallest1);                //print the smallest element that is first element
    int s_smallest;
    for(int i=0;i<n-1;i++){
        s_smallest = largest1;              //assigning the second smallest to large element
        for(int j=0;j<n;j++){
            if(arr[j]>smallest1 && arr[j]<s_smallest){      //check condition to find the second smallest element
                s_smallest = arr[j];
            }
        }
        printf("%d ",s_smallest);
        smallest1 = s_smallest;         //smallest replace with second smallest
    }
    //printf("%d",largest1);
    
    printf("\nOriginal array values ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}