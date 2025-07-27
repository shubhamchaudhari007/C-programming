/*

Description : 

you should read three intergers from user and find the middle number 

Sample Execution : 

Test case 1 : 

Enter the Three numbers : 10 20 30

The middle number is 20

Test case 2 :


Enter the Three numbers : 43 10 25

The middle number is 25

*/

/*name:Shubham Chaudhari
date:15/07/2025
description: print the middle number from given 3 numbers*/

#include<stdio.h>
int main(){
    int num1,num2,num3;   //3 integer declaration
    printf("Enter the Three numbers : ");  //give promt to user to give 3 integers
    scanf("%d %d %d",&num1,&num2,&num3);   //take 3 numbers from user

    if(num1>=num2){           //check num1 is greater than equal num2
        if(num2>=num3){       //check num2 is greater than equal to num3
            printf("The middle number is %d ",num2); //print num2 at middle
        }else if(num1<=num3){ //check num1 is less than equal num3
            printf("The middle number is %d ",num1); //print num1 is at middle
        }else{
            printf("The middle number is %d ",num3); //print num3 is at middle
        }
    }else{
        if(num2<=num3){       //check num2 is less than equal to num3
            printf("The middle number is %d ",num2);  //print num2 is at middle
        }else if(num1>=num3){   //check num1 is greater than equal to num3
            printf("The middle number is %d ",num1);  //print num3 is at middle
        }else{
            printf("The middle number is %d ",num3);  //print num1 is at middle
        }
    }
}
