/*

WAP to check a number for Positive/Negative and Even/Odd

Instructions:

Prompt the user to enter a number
Determine whether number is:
Positive and Even, Or
Positive and Odd, Or
Negative and Even, Or
Negative and Odd. Or
It is Zero
Used Nested if to implement this program
Program execution sample:

Enter a number: 8
The number 8 is positive and even.

Enter a number: -5
The number -5 is negative and odd.

Enter a number: 0
The number is zero.
*/

#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num == 0){
        printf("The number is zero.");
    }else if(num>0){
            if(num%2==0){
                printf("The number %d is positive and even",num);
            }else{
                printf("The number %d is positive and odd",num);
            }
    }
        else if(num<0){
            if(num%2==0){
                printf("The number %d is negative and even",num);
            }else{
                printf("The number %d is negative and odd",num);
            }
        }

}
