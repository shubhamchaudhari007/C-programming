/*

Description : 

You have to read a array elements from the user and find the average.

Sample Execution : 

Test case 1 : 

Enter the size : 5

Enter the array elements : 2 4 6 8 11

Average is 6.2

Test case 2 :


Enter the size : 3

Enter the array elements : 11 21 30

Average is 20.6667

*/

#include<stdio.h>

void Average(int *arr,int n,float *avg){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum+arr[i];
    }
    
    *avg = (float)sum/n;
}

int main(){
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    
    int arr[size];
    printf("Enter the array elements : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    float Avg;
    Average(arr,size,&Avg);
    
    printf("Average is %g",Avg);
}