/*

Description:

c-type library functions check whether ch, which must have the value of an unsigned char or EOF, falls into a certain character class according to the current locale.
islower() - checks for a lower case alphabet whether entered character is between 'a' to 'z'.
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
user@emertxe] ./c_type_lib
Enter the character: a
Entered character is lower case alphabet
Test Case 2:
Enter the character:3
Entered character is not lower case alphabet

*/

/*
Name        : Shubham Sanjay Chaudhari
Date        : 07/08/2025
Description : Write a program to check character is lower case or not
I/O         : Input - Enter the character: z
              output - Entered character is lower case alphabet

*/

#include <stdio.h>

int my_islower(int);

int main()
{
    char ch;
    int ret;

    printf("Enter the character:");
    scanf("%c", &ch);

    ret = my_islower(ch);

    if(ret)
        printf("Entered character is lower case alphabet");
    else
        printf("Entered character is not lower case alphabet");
}

int my_islower(int ch){
    if(ch>96 && ch<=122)                    //checks condition for lower case or not
        return 1;
    else
        return 0;
}
