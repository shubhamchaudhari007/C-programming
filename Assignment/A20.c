#include<stdio.h>

// void fibo(int limit, int a, int b, int c) {
//     printf("%d ", a);   // print current term

//     int next = a - b;  // recurrence: next = previous - current

//     if (next >= limit) {   // continue while next is above limit
//         fibo(limit, b, c, next);
//     }
// }


void fibo(int limit,int first,int second){
     if(-limit >= first && limit <= first){
        printf("%d ",first);
        fibo(limit,second,first - second);
    }
}

int main(){
    int limit;
    printf("Enter a limit : ");
    scanf("%d",&limit);
    int num1 = 0;
    int num2 = 1;
    fibo(limit,num1,num2);
}