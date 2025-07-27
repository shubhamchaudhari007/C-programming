/*
WAP to print largest of 3 integers

Instructions:
Use if else if condition to find largest of 3 integers.

Note: Declare variables int num1, num2, num3, largest;

Program execution sample:

Sample Output 1:
Enter three numbers: 1  5  10 
Largest is 10

Sample Output 2:
Enter three numbers: 125  100 5
Largest is 125

Sample Output 3:
Enter three numbers: 50 200 100
Largest is 200
*/

#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1>num2 && num1>num3){
        printf("largest is %d",num1);
    }else if(num2>num1 && num2>num3){
        printf("largest is %d",num2);
    }else{
        printf("largest is %d",num3);
    }
}
