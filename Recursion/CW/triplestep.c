#include<stdio.h>

int stair(int n){
    if( n==0)
    return 1;
    if(n<0)
    return 0;
    // else if(n==3)
    // return n+1;
    return stair(n-1)+stair(n-2)+stair(n-3)+stair(n-4);
}

int main(){
    int n;
    printf("Enter nth stair : ");
    scanf("%d",&n);

    printf("%d",stair(n));
}