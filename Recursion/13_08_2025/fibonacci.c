#include<stdio.h>

// void fibo(int n){
//     int num1 = 0;
//     int num2 = 1;
//     int sum ;
//     for(int i=1;i<=n;i++){
//         printf("%d ",num1);
//         sum = num1 + num2;
//         num1 = num2;
//         num2 = sum;
//     }
// }

//for negative series
// int fibo(int n){
//     if(n==1 || n==0)
//         return n;
//     else
//         return fibo(n-2)-fibo(n-1);
// }

int fibo(int n){
    if(n==1 || n==0)
        return n;
    else
        return fibo(n-1)+fibo(n-2);
}

int main(){
    int num;
    printf("enter number : ");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
         printf("%d ",fibo(i));
    }
   
}