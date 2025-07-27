/*

Write a C program that calculates and prints the grade for a given score based on predefined grade ranges.

Instructions:

Prompt the user to enter a numeric score.
Determine the corresponding grade based on the following ranges:
A: 90-100
B: 80-89
C: 70-79
D: 60-69
F: Below 60
Display the calculated grade to the user.


Program execution sample:

Sample Output 1:
Enter the score: 95
Your grade is A

Sample Output 2:
Enter number: 35
Your grade is F

Sample Output 3:
Enter a number: 73
Your grade is C

Sample Output 4:
Enter a number: 64
Your grade is D

Sample Output 5:
Enter a number: 86
Your grade is B

*/

#include<stdio.h>
int main(){
    int score;
    printf("Enter the score: ");
    scanf("%d",&score);

    if(score<60){
        printf("Your grade is F");
    }else if(score>=60 && score <70){
        printf("Your grade is D");
    }else if(score >=70 && score <80){
        printf("Your grade is C");
    }else if(score >=80 && score<90){
        printf("Your grade is B");
    }else{
        printf("Your grade is A");
    }
}
