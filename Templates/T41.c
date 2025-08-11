/*

WAP to find the product of two numbers without using *

Note : use functions

Eg:

Enter num1 and num2 : 10 2

Product of two numbers is 20. 

*/

#include<stdio.h>
int multi(int a,int b){
    int multi = 0;
    for(int i=1;i<=b;i++){
        multi = multi + a;
    }
    return multi;
}
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);

    printf("Product of two numbers is %d",multi(num1,num2));

}
