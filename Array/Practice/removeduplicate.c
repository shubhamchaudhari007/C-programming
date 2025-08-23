#include<stdio.h>

void sort(int *arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

//Works only in sorted array
int removeele(int *arr,int n){
    int index = 1;
    for(int i=1;i<n;i++){
        if(arr[i-1] != arr[i]){
            arr[index] = arr[i];
            index++;
        }
    }
    return index;
}

int main(){
    int n;
    printf("Enter Array size : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array Elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    int size = removeele(arr,n);

    printf("array Elements after deleting duplicates : ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

}