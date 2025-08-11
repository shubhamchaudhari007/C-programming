/*

Description:

c-type library functions check whether ch, which must have the value of an unsigned char or EOF, falls into a certain character class according to the current locale.
ispunct() - checks  for  any  printable character which is not a space or an alphanumeric character.
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
Entered character is not punctuation character
Test Case 2:
Enter the character:$
Entered character is punctuation character

*/

/*
Name        : Shubham Sanjay Chaudhari
Date        : 07/08/2025
Description : Write a program to check entered value is punctuation character or not.
I/O         : input - Enter the character: a
              output - Entered character is not punctuation character

*/

#include <stdio.h>

int my_ispunct(int);

int main()
{
    char ch;
    int ret;

    printf("Enter the character:");
    scanf("%c", &ch);

    ret = my_ispunct(ch);           //function call

    if(ret){                        //check return value to show answer punctuation character or not
        printf("Entered character is punctuation character");
    }else{
         printf("Entered character is not punctuation character");
    }
}

int my_ispunct(int ch){
    if((ch==32) || (ch>96 && ch<=122) || (ch>64 && ch<=90) || (ch>=48 && ch<=57))   //check condition for punctuation character or not
        return 0;
    else
        return 1;
}
