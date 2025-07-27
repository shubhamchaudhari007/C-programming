/*
WAP to illustrate the usage of break using a nested loop
*/

#include<stdio.h>
int main(){
    int flag=0;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==2 && j==1){
                printf("found the place\n");
                flag = 1;
                break;
            }
            printf("not found\n");
        }
        if(flag){
            break;
        }
    }
}
