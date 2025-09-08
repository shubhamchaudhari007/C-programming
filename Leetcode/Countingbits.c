#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int dectobinary(int n){
    long long unsigned result = 0;
    long long unsigned power = 1;
    while(n != 0){
        result = result + power*(n%2);
        power *=10;
        n  /=2;
    }
    return result;
}

int* countBits(int n, int* returnSize) {
    
    int size = n+1;
    *returnSize = size;
    int *ans = malloc(size * sizeof(int));
    for(int i=0;i<=n;i++){
        long long unsigned result = dectobinary(i);
        int count = 0;
        while(result != 0){
            if(result % 10 == 1){
                count++;
            }
            result /=10;
        }
        ans[i] = count;
    }
    return ans;
}

int main(){
    int returnSize;
    int *arr;
    int n;
    scanf("%d",&n);
    arr = countBits(n,&returnSize);

    for(int i=0;i<returnSize;i++){
        printf("%d ",arr[i]);
    }
}