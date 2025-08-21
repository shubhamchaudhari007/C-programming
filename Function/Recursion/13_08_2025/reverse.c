#include<stdio.h>
static int power = 1;
void reversed(int n,int *rev){
    *rev = 0;
    if(n != 0){
        reversed(n/10,rev);
        
        *rev = *rev + (n%10)*power ;
        power = power * 10;
    }
}

int main(){
    int num;
    printf("Enter number : ");
    scanf("%d",&num);

    int reverse;
    reversed(num,&reverse);
    printf("%d",reverse);
}