/*
Problem Statement:

Design a simple calculator program that takes two numbers and an arithmetic operation as input from the user and performs the corresponding calculation. The arithmetic operation should be entered as a character (+ for addition, - for subtraction, * for multiplication, / for division). Use a switch case statement to handle different operations.

Comment the prompting messages printf statements.

Ex: //printf("Enter the number:\n");



Sample Execution 1:

Enter number1, operator and number2: 10 * 7

Output: 70



Sample Execution 2:

Enter number1, operator and number2: 20 + 5

Output: 25



Sample Execution 3:

Enter number1 operator and number2: 12 $ 6

Invalid operation!
*/

#include<stdio.h>
int main(){
    int num1,num2;
    char ch;

    //printf("Enter number1,operator and nnumber2: ");
    scanf("%d %c %d",&num1,&ch,&num2);

    switch(ch){
        case '+':
            printf("%d",num1+num2);
            break;
        case '-':
            printf("%d",num1-num2);
            break;
        case '*':
            printf("%d",num1*num2);
            break;
        case '/':
            printf("%d",num1/num2);
            break;
        default:
            printf("Invalid operation!");
    }
}
