/*

WAP to check whether number is even or odd

Instructions:
Use if else condition

Program execution sample:

Sample Output 1:
Enter a number: 5
5 is odd
Sample Output 2:
Enter a number: 10
10 is even

*/

#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: \n");
    scanf("%d",&num);

    if(num%2==0){
        printf("%d is even",num);

    }else{
        printf("%d is odd",num);
    }
}
