/*

Pre-requisites:

Loops
Arithmatic operators
Conditional constructs
Functions
Objective:

To understand the concept of
 Loops (Exit points of loops)
 Conditional constructs
 Functions & its use, return value
Requirements:

Read a number from user.
Create a function is_prime(), which will check the number is prime or not.
Create a function generate_prime(), which will reuse the function is_prime() to create prime series.
Function Prototypes:
  - int prime(int num);
  - void generate_prime(int limit);

Sample Execution:

Test case 1: 
user@emertxe]./prime_or_not
Enter a number: 2
2

Test case 2: 
user@emertxe]./prime_or_not
Enter a number: 4
2 3

Test case 3: 
user@emertxe]./prime_or_not
Enter a number: 20
2 3 5 7 11 13 17 19

Test case 5: 
user@emertxe]./prime_or_not
Enter a number: -2
Invalid input

Test case 6: 
user@emertxe]./prime_or_not
Enter a number: 1

Invalid input

*/

#include <stdio.h>

int is_prime(int);

void generate_prime(int);

int main()
{
    int limit;

    //printf("Enter the limit: ");
    scanf("%d", &limit);

    if (limit > 1)
    {
        generate_prime(limit);
    }
    else
    {
        printf("Invalid input\n");
    }

    return 0;
}

void generate_prime(int n){

    for(int i=2;i<=n;i++){
        if(is_prime(i)){
            printf("%d ",i);
        }
    }
}

int is_prime(int n){
    int count = 0;
        for(int j=2;j<=n/2;j++){
            if(n%j==0){
                count++;
                break;
            }
        }
    if(count==0){
        return 1;
    }else{
        return 0;
    }
}
