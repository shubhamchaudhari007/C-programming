/*

Pre-requisites:

Loops
Arithmatic operators
Conditional constructs
Functions
Objective:
> To understand the concept of

Loops (Exit points of loops)
Conditional constructs
Functions and return value
Requirements:

Read a number from user.
Pass the number to the function is_prime().
Check the number is prime or not in the function.
Return 1 if the number is prime, or return 0 if the number is not prime.
Print the output in the main function based on the return value.
Sample Execution:

Test case 1: 
user@emertxe]./prime_or_not
Enter a number: 2
2 is a prime number

Test case 2: 
user@emertxe]./prime_or_not
Enter a number: 4
4 is not a prime number

Test case 3: 
user@emertxe]./prime_or_not
Enter a number: 101
101 is a prime number

Test case 4: 
user@emertxe]./prime_or_not
Enter a number: 47
47 is a prime number

Test case 5: 
user@emertxe]./prime_or_not
Enter a number: -2
Invalid input

Test case 6: 
user@emertxe]./prime_or_not
Enter a number: 25
25 is not a prime number

Test case 7: 
user@emertxe]./prime_or_not
Enter a number: 2089

2089 is a prime number

*/

/*
Name        :Shubham Sanjay Chaudhari
Date        :15/08/2025
Description :Write a Program to check whether a given number is prime or not using function.
I/O         : Input :   Enter a number : 5
              Output :  
                        5 is not a prime number
                        
*/

#include <stdio.h>

int is_prime(int);

int main()
{
    int num;
    //printf("Enter a number : ");
    scanf("%d",&num);
    if(num >0){
    if(is_prime(num)){                          //function call in if condition return 1 if number is prime and prints
        printf("%d is a prime number",num);
    }else{
        printf("%d is not a prime number",num);
    }
    }else{
        printf("Invalid input");
    }
    return 0;
}

int is_prime(int n){
    int flag = 1;
    for(int i=2;i<=n/2;i++){
        if(n%i==0)                          //check number is prime or not
            flag = 0;
    }
    return flag;
}