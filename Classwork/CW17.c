/*

Description : 

You have to read a number from user and check if a given number is even or odd. Function should return TRUE or FALSE

Sample Execution : 

Test case 1 : 

Enter the number : 2

TRUE

Test case 2 :

Enter the number : 3

FALSE

*/

#include<stdio.h>
int fun(int n){
    if(n%2==0)
        return 1;
    else
        return 0;
}
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    if(fun(num))
        printf("TRUE");
    else
        printf("FALSE");
}
