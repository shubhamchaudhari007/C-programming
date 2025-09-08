#include<stdio.h>

int GCD(int n,int m){
    if(m == 0){
        return n;
    }
    else{
        return GCD(m,n%m);
    }
}

int main(){
    int n,m;
    printf("Enter two numbers : ");
    scanf("%d %d",&n,&m);

    int gcd = GCD(n,m);
    printf("%d",gcd);
}