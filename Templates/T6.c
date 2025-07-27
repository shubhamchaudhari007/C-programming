/*

Write a C program to calculate the simple interest for a given principal amount, rate of interest, and time period.

Instructions:
Prompt the user to enter the principal amount, rate of interest, and time period in years.
Calculate the simple interest using the formula: Simple Interest = (Principal Amount * Rate of Interest * Time) / 100.

*/

#include<stdio.h>
int main(){
    float principal_amount;
    float interest;
    float years;

    printf("enter the principal amount : ");
    scanf("%f",&principal_amount);
    printf("enter rate of interest : ");
    scanf("%f",&interest);
    printf("enter time period in years : ");
    scanf("%f",&years);

    float simple_interest = (principal_amount * interest * years)/100;

    printf("%g",simple_interest);
}
