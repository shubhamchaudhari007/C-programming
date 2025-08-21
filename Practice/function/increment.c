#include<stdio.h>

void inc(int n){
    if(0<n){
    printf("%d ",n);
    inc(n-1);
    }
}

int main(){
    int num;
    scanf("%d",&num);

    inc(num);
}