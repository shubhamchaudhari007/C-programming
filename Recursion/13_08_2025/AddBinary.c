#include<stdio.h>

int Add_bin(int n){
    if(n == 0)
        return 0;
    else
        return n%2 + Add_bin(n/2);
}

int main(){
    int num;
    printf("Enter number : ");
    scanf("%d",&num);

    printf("reverse = %d",Add_bin(num));
}