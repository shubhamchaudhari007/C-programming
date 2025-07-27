/*

Write a program to print the odd numbers between 1 to 100

Sample execution

1 3 5 7 9 11 13 15 17 .........  99

*/

#include<stdio.h>
int main(){
    for(int i=1;i<=100;i++){
        if(i%2==1){
            printf("%d ",i);
        }
    }
}
