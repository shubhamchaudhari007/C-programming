/*

WAP to find the factorial of a number using recursive function

Eg:

Enter the number: 5

Factorial of 5 is 120

*/

#include<stdio.h>

int factorial(int n){
    if(n==1)
    return 1;
    else
    return n*factorial(n-1);
}

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    
    int fact = factorial(num);
    printf("Factorial of %d is %d",num,fact);
}