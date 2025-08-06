/*

Description : 

You have to read 2 integers from user and multiply two numbers without using multiplication operator

Sample Execution : 

Test case 1 : 

Enter the two numbers : 10 2

The Result is 20

Test case 2 :


Enter the two numbers : 1 2

The Result is 2

*/

#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter the two numbwers : \n");
    scanf("%d %d",&num1,&num2);
    int sum = 0;
    for(int i=1;i<=num2;i++){
        sum = sum+num1;
    }
    printf("The Result is %d",sum);
}
