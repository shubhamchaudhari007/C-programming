/*
WAP to illustrate the usage of continue using a simple loop

For example, run a loop from 0 to 10. Print all values 0 to 9 except the value of 5.
Use continue inside an if condition to implement this
*/

#include<stdio.h>
int main(){
    for(int i=0;i<10;i++){
        if(i==5){
            continue;
        }
        printf("%d ",i);
    }
}
