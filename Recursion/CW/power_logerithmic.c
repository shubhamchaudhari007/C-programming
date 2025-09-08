#include<stdio.h>

int power(int a,int b){
    if(b==0)
    return 1;

    // if(b==1)
    // return a;

    int c = power(a,b/2);

    if(b%2==0){
        return c*c;
    }else{
        return c*c*a;
    }
}

int main(){
    int base,expo;
    printf("Enter base and exponent : ");
    scanf("%d %d",&base,&expo);

    int a = power(base,expo);
    printf("%d",a);
}