/*

Description : 

You have to write a function to calculate square a number

- y = x * x

Sample Execution : 

Test case 1 : 

Enter the number : 2

Square is 4

Test case 2 :


Enter the number : 5

Square is 25

*/

#include<stdio.h>
int square(int n){
    return n*n;
}
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    
    printf("Square is %d",square(num));
}
