/*

WAP to find n to the power of m value using recursive function

Instruction: If n = 2, m = 5, find 2 power 5 value

Eg:

Enter n and m : 2 5

2 to the power of 5 is 32

*/

#include<stdio.h>

int power(int n,int m){
    if(m==0)
    return 1;
    else
    return n*power(n,m-1);
}

int main(){
    int n,m;
    printf("Enter n and m : ");
    scanf("%d %d",&n,&m);
    
    int res = power(n,m);
    printf("%d to the power of %d is %d",n,m,res);
}