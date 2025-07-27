/*

WAP to check whether number is between 50 to 100

Instructions:
Use if else condition and logical operator

Program execution sample:

Sample Output 1:
Enter a number: 60
60 is in range
Sample Output 2:
Enter number: 5
5 is not in range

*/

#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: \n");
    scanf("%d",&num);

    if(num>=50 && num<=100){
        printf("%d is in range",num);
    }else{
        printf("%d is not in range",num);
    }
}
