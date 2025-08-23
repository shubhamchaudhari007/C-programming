/*

Description : 

You have to read two numbers from user and you have to swap the two number.

Sample Execution : 

Test case 1 : 

Enter the number1 : 10

Enter the number2 : 20

Before swap :

num1 is 10

num2 is 20

After swap :

num1 is 20

num2 is 10

Test case 2 :


Enter the number1 : 5

Enter the number2 : 10

Before swap :

num1 is 5

num2 is 10

After swap :

num1 is 10

num2 is 5

*/

#include<stdio.h>

void Swap(int *n1,int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main(){
    int num1,num2;
    printf("Enter the number1 : ");
    scanf("%d",&num1);
    
    printf("Enter the number2 : ");
    scanf("%d",&num2);
    
    printf("Before swap :\n");
    printf("num1 is %d\n",num1);
    printf("num2 is %d\n",num2);
    Swap(&num1,&num2);
    printf("After swap :\n");
    printf("num1 is %d\n",num1);
    printf("num2 is %d\n",num2);
    
}