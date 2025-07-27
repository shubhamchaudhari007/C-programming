/*

Write a C program to check number is +ve, -ve or 0

Instructions:


The program prompts the user to enter a number.
It then reads the input number using scanf.
The program checks the number using the "if-else if" statement:
If the number is greater than 0, it prints "The number is positive."
If the number is less than 0, it prints "The number is negative."
If the number is neither greater than 0 nor less than 0 (i.e., it's equal to 0), it prints "The number is zero."

Program execution sample:

Sample Output 1:
Enter a number: -5
The number is negative

Sample Output 2:
Enter a number: 10
The number is positive

Sample Output 3:
Enter a number: 0
The number is zero

*/

#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num == 0){
        printf("The number is zero");
    }else if(num > 0){
        printf("The number is positive");
    }else{
        printf("The number is negative");
    }
}
