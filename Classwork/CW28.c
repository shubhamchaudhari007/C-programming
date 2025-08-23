/*

WAP to generate fibonacci series upto nth term

Eg:

Enter the limit : 15

Fibonacci series are : 0, 1, 1, 2, 3, 5, 8, 13,

*/

#include<stdio.h>

// int fibo(int n){
//     if(n==1 || n==0)
//     return n;
//     else
//     return fibo(n-1)+fibo(n-2);
// }

// void fibo(int n){
    
//     static int num1 = 0;
//     static int num2 = 1;
//     if(n>num1){
//         printf("%d, ",num1);
        
//         int sum = num1 + num2;
//         num1 = num2;
//         num2 = sum;
//         fibo(n);
//     }
//     return;
// }

void fibo(int limit,int n,int m){
    if(limit >= n){
        printf("%d, ",n);
        fibo(limit,m,n+m);
    }
}

int main(){
    int limit,n=0,m=1;
    //printf("Enter the limit : ");
    scanf("%d",&limit);
    
    //int i=0;
    printf("Fibonacci series are : ");
    // while(fibo(i) <= limit){
    //     printf("%d, ",fibo(i));
    //     i++;
    // }
    fibo(limit,n,m);
}