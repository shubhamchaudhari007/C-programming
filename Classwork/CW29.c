/*

WAP to find the sum of the digits of a number using recursive function

Eg:

Enter the number: 10359

Sum of the digits is 18

*/

#include<stdio.h>

int Sums(int n){
    if(n==0)
    return 0;
    
    int rem = n%10;
    return rem + Sums(n/10);
}

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    
    int sum = Sums(num);
    printf("Sum of the digits is %d",sum);
}