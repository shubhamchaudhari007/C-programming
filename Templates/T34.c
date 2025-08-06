/*

WAP to Illustrate creation of User defined Array Size

We can create an integer array of fixed size by hardcoding the size during array declaration.
For example int arr[10];
This does not suffice often as user may want to define the size at runtime (during execution). This is possible by getting the size of array from user using scanf and then defining the array using size.

Follow the Instructions to create an array of user defined size :-
Define a variable size
Prompt the user to enter the size of array
Read the size using scanf
Create an integer array named arr with the user defined size - int arr[size]
Prompt the user to enter size elements
Read the individual elements using scanf and store it in the array (using loop)
Print the array elements using a separate loop

*/

#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);

    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
      for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
