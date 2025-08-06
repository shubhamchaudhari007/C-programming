/*

Description : 

You have to read a number from user, print the number is palindrome or not

Sample Execution : 

Test case 1 : 

Enter the number : 121

The Entered number is an palindrome.

Test case 2 :


Enter the number : 1234

The Entered number is not an palindrome.

*/

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int num1 = num;
    int rem,result=0;

    for(;num>0;num=num/10){
        rem = num%10;
        result = result*10+rem;
    }

    if(result == num1){
        printf("The Entered number is an palindrome");
    }else{
        printf("The Entered number is not an palindrome");
    }

}
