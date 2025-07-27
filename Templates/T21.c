/*

WAP to Reverse a Positive number

Comment the prompting messages printf statements.

Ex: //printf("Enter the number:\n");

Program execution sample:

Sample Output 1:
Enter a number: 1234
Reversed number is 4321
Sample Output 2:
Enter a number: 56789
Reversed number is 98765
Sample Output 3:
Enter a number: 1
Reversed number is 1
Sample Output 4:
Enter a number: 0
Reversed number is 0
Sample Output 5:
Enter a number: -3
Please enter a positive integer

*/

#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int rem,temp=0;
    if(num>=0){
        for(;num!=0;num=num/10){
            rem = num%10;
            temp = temp*10+rem;
        }
        printf("Reversed number is %d",temp);
    }else{
        printf("Please enter a positive integer");
    }
}
