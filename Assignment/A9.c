/*

Description:

c-type library functions check whether ch, which must have the value of an unsigned char or EOF, falls into a certain character class according to the current locale.
isalnum() - checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).
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
The character 'a' is an alnum character.
Test Case 2:
Enter the character: ?
The character '?' is not an alnum character.

*/

/*
Name        : Shubham Sanjay Chaudhari
Date        : 06/08/2025
Description : Check the given character is alphanumeric or not
I/O         : Input :  Enter the character: A
              output : The character 'A' is an alnum character.

*/

#include <stdio.h>

int my_isalnum(int);

int main()
{
    char ch;
    int ret;

    printf("Enter the character:");
    scanf("%c", &ch);

    ret = my_isalnum(ch);

    if(ret){                                                            //if return value is non zero prints alphanumeric
        printf("\nEntered character is alphanumeric character");

    }else{
        printf("\nEntered character is not alphanumeric character");      //else not alphanumeric
    }
}

int my_isalnum(int ch){
    if((ch>=65 && ch<=90)||(ch>47 && ch<58)||(ch>96 && ch<=122)){       //condition to check value is alphanumeric or not
        return 1;
    }else{
        return 0;
    }
}
