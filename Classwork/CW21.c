/*

WAP to find the average of array's elements.

Instructions:

Read size and array's elements from the user

Write a function to find the average

Print the average in the main function

Eg:

Enter array size : 5

Enter array elements : 10 4 9 7 3

Average of array elements : 6.6

*/

#include<stdio.h>
float Avg(int *a,int s){
    int sum = 0;
    float Avg;
    for(int i=0;i<s;i++){
        sum = sum + *(a+i);
    }
    Avg =(float)sum/s;
    return Avg;
}

int main(){
    int n;
    printf("Enter array size : ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter array elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    float Avg1 = Avg(arr,n);
    printf("Average of array elements : %f",Avg1);
    
    
}