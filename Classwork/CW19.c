/*

WAP to find the sum and product of two numbers

Eg:

Enter the two numbers : 10 20

Output : sum = 30, product = 200

*/

#include<stdio.h>

void Sum_product(int a,int b,int *ptr1,int *ptr2){
    *ptr1 = a+b;
    *ptr2 = a*b;
}

int main(){
    int n, m, sum, product;
    printf("Enter the two numbers : ");
    scanf("%d %d",&n,&m);
    
    Sum_product(n,m,&sum,&product);
    
    printf("Output : sum = %d, product = %d",sum,product);
    
}