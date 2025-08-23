/*
WAP to print numbers from 0 to n using static variable and recursive  function.

Eg:

Enter the number : 10

0 1 2 3 4 5 6 7 8 9 10
*/

#include<stdio.h>

void inc(int n){
    static int i = 0;
    if(n>=i){
        printf("%d ",i);
        i++;
        inc(n);
    }
    return;
}

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    
    inc(num);
}