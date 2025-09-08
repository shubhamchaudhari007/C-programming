#include<stdio.h>

int path(int cr,int cc,int er,int ec){
    int rightway = 0;
    int downway = 0;
    if(cr == er && cc == ec){
        return 1;
    }else if(cr == er){//only rightway
        rightway += path(cr,cc+1,er,ec);
    }
    else if(cc == ec){//only downways
        downway += path(cr+1,cc,er,ec);
    }
    else{
        downway += path(cr+1,cc,er,ec);
        rightway += path(cr,cc+1,er,ec);
    }
    
    
    int totalways = rightway + downway;
    return totalways;
}

int main(){
    int n,m;
    printf("Enter rows amd colums of maze : ");
    scanf("%d %d",&n,&m);

    int x = path(1,1,n,m);
    printf("%d",x);
}