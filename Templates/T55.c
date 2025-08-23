/*

WAP to find the sum of n natural numbers using recursive function

Eg:

Enter the number : 10

Sum of 1st 10 numbers is 55

*/

#include<stdio.h>

int Sum(int n){
    if(n==1)
    return 1;
    else
    return n+Sum(n-1);
}

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    
    int sum = Sum(num);
    
    printf("sum of 1st %d numbers is %d",num,sum);
}