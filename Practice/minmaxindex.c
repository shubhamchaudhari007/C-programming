#include<stdio.h>
int main(){
    int n;
    printf("Enter size : ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int index1 = 0;
    int index2 = 0;
    int max = arr[0];
    int min = arr[0];

    for(int i=0;i<n;i++){
        if(max < arr[i]){
            max = arr[i];
            index1 = i;
        }
        if(min > arr[i]){
            min = arr[i];
            index2 = i;
        }
    }
    printf("%d",index1-index2);

}