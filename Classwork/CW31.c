/*

Description : 

You have to read a N value from user and find the sum of 1 to N sequence.

Sample Execution : 

Test case 1 : 

Enter the N value : 5

Sum is 15

Test case 2 :

 

Enter the N va

*/

#include<stdio.h>

int nsum(int n){
    if(n==1)
    return 1;
    
    return n+nsum(n-1);
}

int main(){
    int n;
    printf("Enter the N value : ");
    scanf("%d",&n);
    
    int sum = nsum(n);
    printf("Sum is %d",sum);
}