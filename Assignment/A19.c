/*

Description:

In mathematics, the Fibonacci numbers or Fibonacci sequence are the numbers in the following integer sequence 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 . . .OR 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 . . .
By definition, the first two numbers in the Fibonacci sequence are either 1 and 1, or 0 and 1, depending on the chosen starting point of the sequence, and each subsequent number is the sum of the previous two.
Pr-requisites:

Arithmetic Operators
Recursions
Objective: -

To understand the concept of
Recursive Functions
Inputs: -
           Integers N
Note : Should not use static and global variables.

Sample execution: -

Test Case 1 :
user@emertxe] ./fibbonacci_series
Enter a number: 8
0, 1, 1, 2, 3, 5, 8

Test Case 2:
Enter a number: 10
0, 1, 1, 2, 3, 5, 8

Test Case 3:
Enter a number: 21

0, 1, 1, 2, 3, 5, 8, 13, 21

Test Case 4:
Enter a number: -12

Invalid input

*/

/*
Name        : Shubham Sanjay Chaudhari
Date        : 20/08/2025
Description : Write a program to generate fibonacci number using recursion.
I/O         : input - Enter a number: 10

              output - 0, 1, 1, 2, 3, 5, 8
              
*/

#include <stdio.h>

void positive_fibonacci(int, int, int, int);

int main()
{
    int limit;
    
    printf("Enter the limit : ");
    scanf("%d", &limit);
    if(limit >= 0)                              //input validation
    positive_fibonacci(limit, 0, 1, 0);         //function call
    else
    printf("Invalid input");
}

void positive_fibonacci(int limit,int a,int b,int c){       
    if(a <= limit){                             //checks upto limit
        printf("%d, ",a);                       //prints fibonacci numbers
        c = a+b;                                //next term calculated
        a = b;                                  //assign first to second 
        b = c;                                  //assign second to next
        positive_fibonacci(limit,a,b,c);        //recursive function call
    }
}