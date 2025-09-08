#include<stdio.h>

int isprime(int *arr,int num){
    int k = 0;
    for(int i=2;i<=num;i++){
        int count = 0;
        for(int j=2;j<=i/2;j++){
            if(i%j == 0){
                count++;
            }
        }
        if(count == 0){
            arr[k] = i;
            k++;
        }
    }
    return k;
}
int main(){
    int arr[100];
    int num;
    printf("enter the number : ");
    scanf("%d",&num);

    int size = isprime(arr,num);
    // for(int i=0;i<size;i++){
    //     printf("%d ",arr[i]);
    // }
    int flag = 0;
    int i = 0;
    while(i<size){
        int sum = 0,count = 0;;
        sum = sum + arr[i];
        count++;
        if(sum == num){
                flag = 1;
                printf("%d",count);
                break;
            }
        int j = i+1;
        while(j<size){
            sum = sum + arr[j];
            count++;
            if(sum == num){
                flag = 1;
                printf("%d",count);
                break;
            }else if(sum > num){
                break;
            }
            j++;
        }
        i++;
        
    }
    if(!flag){
        printf("%d",0);
    }
}