/*
Description:

 

Read size and elements into the array. After reading the input, you need to pass array to the function. In function, you need to remove duplicates/copy non-duplicate elements into new array.
You need to print he final output in main
Please use the prototype given below:
 void fun(int *arr1, int size, int *arr2, int *new_size);

 

Pre-requisites:

 

Arrays
Pointers
Input:

 

 

Read size and elements into the array
Output:

 

Test Case 1:

Enter the size: 5

Enter elements into the array: 5 1 3 1 5

After removing duplicates: 5 1 3

Test Case 2:

Enter the size: 5

Enter elements into the array: 2 1 1 1 5

After removing duplicates: 2 1 5

*/

/*
Name        :Shubham Sanjay Chaudhari
Date        :15/08/2025
Description :Write a Program to remove duplicate elements in a given array
I/O         : Input :   Enter the size: 5
                        Enter elements into the array: 1 1 2 3 4
              Output :  
                        After removing duplicates: 1 2 3 4
                        
*/

#include <stdio.h>

void fun(int arr1[], int size, int arr2[], int *new_size);

int main()
{
    int size,size2;
    //printf("Enter the size : ");                    //give Size of an array
    scanf("%d",&size);
    
    int arr1[size];
    int arr2[size];
    //printf("Enter elements into the array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr1[i]);                       //taking array elements from user
    }
    
    fun(arr1,size,arr2,&size2);                     //calling function to print only non duplicate elements
    
    printf("After removing duplicates : ");
    for(int i=0;i<size2;i++){
        printf("%d ",arr2[i]);                      //printing second array 
    }
}

void fun(int *arr1,int size,int *arr2,int *size2){
    *size2 = 0;
    // arr2[0] = arr1[0];
    // *size2 = 1;
    for(int i=0;i<size;i++){
        int flag = 1;                               //taking flag to check number is already present or not
        for(int j=0;j<*size2;j++){
            if(arr1[i] == arr2[j]){                 //condition true alreday element is present flag will be 0
                flag = 0;
                break;
            }
        }
        
        if(flag){                                   //if flag 1 then only add element otherwise skip
            arr2[*size2] = arr1[i];
            (*size2)++;
        }
    }
}