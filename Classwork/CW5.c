/*

Description : 

You have to read base value and exponential value from user and print the power of N series.

Sample Execution : 

Test case 1 : 

Enter the base value : 2

Enter the exponential value : 5

1 2 4 8 16 32

Test case 2 :


Enter the base value : 3

Enter the exponential value : 3

1 3 9 27

*/

#include<stdio.h>
int main(){
    int num,n;
    //printf("Enter the base value : ");
    scanf("%d",&num);

    //printf("Enter the exponential value : ");
    scanf("%d",&n);

    int result = 1;

    for(int i=1;i<=n+1;i++){
        printf("%d ",result);
        result = result * num;
    }
}
