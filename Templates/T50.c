/*

WAP to print the value of the number using pointer

Eg: 

Enter the value of num : 10

Value is 10

*/

#include<stdio.h>
int main(){
    int num;
    printf("Enter the value of num : ");
    scanf("%d",&num);
    
    int *ptr = &num;
    printf("value is %d",*ptr);
}