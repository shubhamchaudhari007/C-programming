/*

Description:

AP :
In mathematics, an arithmetic progression (AP) or arithmetic sequence is a sequence of numbers such that the difference between the consecutive terms is constant.
For instance, the sequence 5, 7, 9, 11, 13, 15 ... is an arithmetic progression with common difference of 2.
GP :
In mathematics, a geometric progression, also known as a geometric sequence, is a sequence of numbers where each term after the first is found by multiplying the previous one by a fixed, non-zero number called the common ratio.
For example, the sequence 2, 6, 18, 54, ... is a geometric progression with common ratio 3. Similarly 10, 5, 2.5, 1.25, ... is a geometric sequence with common ratio 1/2.
HP :
 In mathematics, a harmonic progression (or harmonic sequence) is a progression formed by taking the reciprocals of an arithmetic progression.
Pr-requisites:-

Loops
Operators
Data Types
Objective: -

To understand the concept of
 

Continuous looping.
If-else constructs
Type Casting
Inputs: -

Positive integers say 'A', 'R' and 'N', where N > 1
where:
A = First number
R = Common difference(AP & HP), Common ratio(GP)
N = number of terms
 
Sample execution: -
user@emertxe] ./progressions
Enter the First Number 'A': 2
Enter the Common Difference / Ratio 'R': 3
Enter the number of terms 'N': 5
AP = 2, 5, 8, 11, 14
GP = 2, 6, 18, 54, 162
HP = 0.500000, 0.200000, 0.125000, 0.090909, 0.071428

Test Case 2:
Enter the First Number 'A': 2
Enter the Common Difference / Ratio 'R': 3
Enter the number of terms 'N': -5
Invalid input

*/

/*
Name        : Shubham Sanjay Chaudhari
Date        : 30/07/2025
Description : WAP to Generate AP, GP, HP series.
I/O         : Input : Enter the first number 'A' : 2
                      Enter the Common Difference / Ratio 'R' : 4
                      Enter the number of terms 'N' : 5

              Output: AP : 2, 6, 10, 14, 18
                      GP : 2, 8, 32, 128, 512
                      HP : 0.500000, 0.166667, 0.100000, 0.071429, 0.055556

*/
#include<stdio.h>
int main(){
    int A,R,N;
    //printf("Enter the First number 'A' : ");
    scanf("%d",&A);
    //printf("Enter the Common Difference / Ratio 'R' : ");
    scanf("%d",&R);
    //printf("Enter the number of terms 'N' : ");
    scanf("%d",&N);

    int sum = A;
    int multi = A;
    int Hp = A;
    if(N>0){

    printf("AP = ");
    for(int i=1;i<=N;i++){
        printf("%d, ",sum);
        sum = sum+R;                        //Calculate the value of AP's next terms after the first term

    }

    printf("\nGP = ");
    for(int i=1;i<=N;i++){
        printf("%d, ",multi);
        multi = multi*R;                    //Calculate the value of GP's next terms after the first term
    }

    printf("\nHP = ");
    for(int i=1;i<=N;i++){
        printf("%f, ",(float)1/Hp);
        Hp = Hp + R;                        //Calculate the value of HP's next terms after the first term
    }
    }else{
        printf("Invalid input");
    }
}
