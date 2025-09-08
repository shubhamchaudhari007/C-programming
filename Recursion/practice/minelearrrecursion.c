#include<stdio.h>
#include<limits.h>
int min(int *arr,int size){
    static int min1 = INT_MAX;
    if(size < 0){
        return min1;
    }
    if(min1 > arr[size]){
        min1 = arr[size];
        min(arr,size-1);
    }
}

int main(){
    int arr[6] = {4,3,2,1,5,6};
    int x = min(arr,5);
    printf("%d",x);
}