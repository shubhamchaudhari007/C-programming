#include<stdio.h>
int main(){
    int start,end;
    printf("Enter start and end : ");
    scanf("%d %d",&start,&end);
    if(start < 0 || end < 0){
        printf("Invalid input");
    }else{
    for(int i = start ; i< end ; i++){
        int sum = 0;
        for(int j = 1; j < i ; j++){
            if(i%j == 0){
                sum = sum + j;
            }
        }
        if(sum == i){
            printf("%d ",i);
        }
    }
    }
}