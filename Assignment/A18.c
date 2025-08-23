/*

Description:

Read number n from user.
Validate the given number
Call main function from main for calculating factorial.
Prompt for continue option without using loop.
Pr-requisites:-

Storage Classes
Recursions
Objective: -

To understand the concept of Recursion and static keyword
Inputs: -

 Positive integer N
Sample execution: -

 
Test Case 1:

 
user@emertxe] ./factorial

 
Enter the value of N : 7
Factorial of the given number is 5040

Test Case 2:
Enter the value of N : 5
Factorial of the given number is 120

Test case 3:
Enter the value of N : -1
Invalid Input

Test case 4:
Enter the value of N : 0

Factorial of the given number is 1

*/
/*
Name        : Shubham Sanjay Chaudhari
Date        : 21/08/2025
Description : Write a program to find factorial of given number using recursion.
I/O         : input - Enter the value of N : 5

              output - 120
              
*/

#include <stdio.h>

int main()
{
    static int num;
    static unsigned long long int fact = 1;
    static char a = 1;
    if(a == 1){
        //printf("Enter the value of N : ");
        scanf("%d",&num);
        a=0;
    }
    
    if(num < 0){
        printf("Invalid Input");
        return 0;
    }
    if(num == 0){
        printf("Factorial of the given number is %lld",fact);
        return 0;
    }else{
        fact = fact*num;
        num--;
        main();
    }
    
}