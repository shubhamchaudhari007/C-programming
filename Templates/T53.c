/*

WAP to print array's elements using function

Instruction : Take the array as int arr[5] = {10, 20, 30, 40, 50}

*/

#include<stdio.h>
void printarr(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
}
int main(){
    int n = 5;
    int arr[5] = {10,20,30,40,50};
    
    printarr(arr,n);
}