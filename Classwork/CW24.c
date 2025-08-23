/*

Description : 

You have to read two number and find the sum and product of two numbers

Sample Execution : 

Test case 1 : 

Enter the number1 : 5

Enter the number2 : 10

Sum is 15

Product is 50

Test case 2 :


Enter the number1 : 2

Enter the number2 : 2

Sum is 4

Product is 4

*/

#include<stdio.h>

void Sum(int n,int m,int* sum){
    *sum = n+m;
}

void Product(int n,int m,int *prod){
    *prod = n*m;
}

int main(){
    int num1,num2;
    printf("Enter the number1 : ");
    scanf("%d",&num1);
    
    printf("Enter the number2 : ");
    scanf("%d",&num2);
    
    int sum,product;
    
    Sum(num1,num2,&sum);
    Product(num1,num2,&product);
    
    printf("Sum is %d\n",sum);
    printf("Product is %d",product);
}