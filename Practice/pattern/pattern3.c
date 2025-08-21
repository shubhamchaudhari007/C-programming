/*
A B C D
E F G H
I J K L
M N O P
*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);

    char ch = 'A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }

}