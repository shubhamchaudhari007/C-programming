#include<stdio.h>
int main(){
    int n;
    printf("Enter array Size : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int ele;
    printf("Enter element to delete : ");
    scanf("%d",&ele);

    for(int i=0;i<n;i++){
        if(ele == arr[i]){
            for(int k=i;k<n-1;k++){
                arr[k] = arr[k+1];
            }
            
        }

    }
    n--;
    printf("Updated array : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}