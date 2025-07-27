/*
Problem statement
Implement ticket price calculator program for a drama theater. The program should determine the ticket price based on the age of the visitor, applying appropriate discounts for children and seniors.

Instructions:

Prompt the user to enter their age.
Based on the age provided, calculate the ticket price using the following rules:
Children under 5 years old can enter for free.
Children aged 5 to 12 receive a 50% discount on the regular ticket price.
Seniors aged 65 and above receive a 20% discount on the regular ticket price.
For all other age groups, the regular ticket price applies.
Display the calculated ticket price to the user.
Sample Executions:

Scenario: Child Under 5 Years Old

Input: Age = 3
Output:
Children under 5 years old get in free!
Ticket price: Rs. 0.00
Scenario: Child Aged 8

Input: Age = 8
Output: Ticket price: Rs. 50.00
Scenario: Senior Aged 70

Input: Age = 70
Output: Ticket price: Rs. 80.00
Scenario: Adult Aged 25

Input: Age = 25
Output: Ticket price: Rs. 100.00

*/

#include<stdio.h>
int main(){
    int age;
    float ticket = 100.00;
    printf("age = ");
    scanf("%d",&age);

    if(age<5){
        printf("Children under 5 years old get in free!\nTicket price:Rs. %.2f",ticket-100);
    }else if(age>=5 && age<12){
        printf("Ticket price:Rs. %.2f",ticket-50);
    }else if(age>=65){
        printf("Ticket price:Rs. %.2f",ticket-20);
    }else{
        printf("Ticket price:Rs. %.2f",ticket);
    }
}
