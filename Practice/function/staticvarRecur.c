#include<stdio.h>

void rec(int n){
    if(n==0){
    printf("%d\n",n);
    return;
    }
    rec(n-1);
    printf("%d\n",n);
    return;
}

int main(){
    int n;
    printf("Enter num : ");
    scanf("%d",&n);

    rec(n);
    return 0;
    
}