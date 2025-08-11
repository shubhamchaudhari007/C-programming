/*

WAP to check if number is odd or even. Print the result in main function.

Eg1:

Enter a number : 10

10 is even

Eg2:

Enter a number : 15

15 is odd

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
    scanf("%d",&num);
    int ret = fun(num);
    if(ret)
        printf("%d is even",num);
    else
        printf("%d is odd",num);
}
