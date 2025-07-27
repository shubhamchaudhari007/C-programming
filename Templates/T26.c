/*
WAP to illustrate the usage of break using a simple loop
*/

#include<stdio.h>
int main(){

    for(int i=1;i<=5;i++){
        if(i==3){
        printf("break");
        break;
        }
        printf("loop execute\n");
    }
}
