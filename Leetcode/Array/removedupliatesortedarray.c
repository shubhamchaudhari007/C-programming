#include<stdio.h>

void sorted(int *arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int removeele(int *arr,int size){
    int index = 1;
    for(int i =1;i<size;i++){
        if(arr[i-1]!= arr[i]){
            arr[index] = arr[i];
            index++;
        }
    }
    return index;
}

int main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    
    sorted(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    int x = removeele(arr,n);
    for(int i=0;i<x;i++){
        printf("%d ",arr[i]);
    }
}