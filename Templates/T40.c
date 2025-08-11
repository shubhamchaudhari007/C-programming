/*

Implement a function to  find the sum of two numbers
Enter num1 and num2 : 10 2

Sum of two numbers is 12

*/

#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);

    printf("Sum of two numbers is %d",sum(num1,num2));

}
