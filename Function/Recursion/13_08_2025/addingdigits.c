#include<stdio.h>

int add(int n){
    if(n==0)
        return 0;
    else
        return n%10 + add(n/10);
}

int main(){
    int num;
    printf("Enter number : ");
    scanf("%d",&num);

    printf("Sum of all digits is : %d",add(num));

}