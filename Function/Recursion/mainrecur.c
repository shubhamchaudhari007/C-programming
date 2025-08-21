#include<stdio.h>
int main(){
    static unsigned long long int fact = 1;
    static int num;
    static int flag = 1;

    if(flag == 1){
        printf("Enter the number : ");
        scanf("%d",&num);
        flag = 0;
    }

    if(num > 1){
        fact = fact*num;
        num--;
        main();
    }else if(num == 0 || num == 1){
        printf("%lld",fact);
        
    }else {
        printf("Invalid Input");
    }
}