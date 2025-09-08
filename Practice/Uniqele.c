#include<stdio.h>
int main(){
    int n;
    printf("Enter siz eof array");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n-1;i++){
        int count = 0;
        for(int j = 0;j<n;j++){

            if(j<i){
                if(arr[i] == arr[j]){
                    break;
                }
            }else if(arr[i] == arr[j]){
                    count ++;
            }
        }
        if(count == 1){
            printf("%d ",arr[i]);
        }
    }
}