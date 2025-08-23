/*

WAP to find the square of array's elements using a function.

Instructions:

Read the size and array's elements from the user

Write a function called display to print the array's elements

Write a function called square to square the array's elements and update the same array.

Donot use another additional array.

Eg:

Enter the array size : 6

Enter the array elements : 2 3 5 4 1 7

Array elements before squaring : 2 3 5 4 1 7  //print using display function

Array elements after squaring ; 4 9 25 16 1 49 // print using display function
// 
// */

#include<stdio.h>
void display(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
}

void square(int* arr,int n){
    for(int i=0;i<n;i++){
        *(arr+i) *= *(arr+i);
    }
}

int main(){
    int n;
    printf("Enter the array size : ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter the array elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Array elements before squaring : ");
    display(arr,n);
    
    printf("\nArray elements after squaring : ");
    square(arr,n);
    display(arr,n);
}