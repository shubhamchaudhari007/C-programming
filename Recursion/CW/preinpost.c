#include<stdio.h>

void prepost(int n){
    if(n==0)
    return;
    printf("pre %d\n",n);
    prepost(n-1);
    printf("in %d\n",n);
    prepost(n-1);
    printf("post %d\n",n);
}

int main(){
    int n;
    printf("Enter value of n :");
    scanf("%d",&n);

    prepost(n);
}