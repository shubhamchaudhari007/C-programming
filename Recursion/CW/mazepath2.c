#include<stdio.h>
int path2(int n,int m){
    int downway = 0;
    int rightway = 0;
    if(n==1 && m==1){
        return 1;
    }
    if(n==1){
        rightway += path2(n,m-1);
    }
    if(m==1){
        downway += path2(n-1,m);
    }
    if(n>1 && m>1){
        rightway += path2(n,m-1);
        downway += path2(n-1,m);
    }
    int totalways = rightway + downway;
    return totalways;
}

int main(){
    int n,m;
    printf("Enter rows amd colums of maze : ");
    scanf("%d %d",&n,&m);

    int x = path2(n,m);
    printf("%d",x);
}