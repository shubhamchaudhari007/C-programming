/*

Description:

c-type library functions check whether ch, which must have the value of an unsigned char or EOF, falls into a certain character class according to the current locale.
isxdigit() - checks for a hexadecimal digit i.e. given character is between '0' - '9' or 'a' - 'f' or 'A' - 'F'
Pr-requisites: -
Functions
Objective: -

To understand the concept of
Functions
Inputs: -
        An ASCII character
Outputs: -
        0 or non-zero value based on condition success or failure
Sample execution: -
Test Case 1:
user@emertxe] ./is_xdigit
Enter the character: a
Entered character is an hexadecimal digit

Test Case 2:
user@emertxe] ./is_xdigit
Enter the character:3
Entered character is  an hexadecimal digit

Test Case 3:
user@emertxe] ./is_xdigit
Enter the character:G

Entered character is not an hexadecimal digit

*/

/*
Name        : Shubham Sanjay Chaudhari
Date        : 07/08/2025
Description : Write a program to check entered value is hexadecimal digit or not.
I/O         : input - Enter the character: 4
              output - Entered character is an hexadecimal digit

*/

#include <stdio.h>

int is_xdigit(int);

int main()
{
    char ch;
    short ret;

    printf("Enter a character: ");
    scanf("%c", &ch);

    ret = is_xdigit(ch);                //function call

    if(ret){                            //based on return value of function it prints the output
        printf("Entered character is an hexadecimal digit");
    }else{
        printf("Entered character is not an hexadecimal digit");
    }

    return 0;
}

int is_xdigit(int ch){
    if((ch>=48 && ch<=57)||(ch>=65 && ch<=70)||(ch>=97 && ch<=102)) //condition to check digit or character is hexadecimal or not
        return 1;
    else
        return 0;
}
