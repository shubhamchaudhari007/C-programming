/*

WAP to check whether a number is positive or negative

Instructions:
Use if else condition to check

Program execution sample:

Sample Output 1:
Enter a number: 5
5 is positive
Sample Output 2:
Enter a number: -23
-23 is negative

*/

#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: \n");
    scanf("%d",&num);

    if(num>=0){
        printf("%d is positive",num);

    }else{
        printf("%d is negative",num);
    }
}
