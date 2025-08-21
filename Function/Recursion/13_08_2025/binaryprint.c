#include<stdio.h>
void binary(int num,int *bin){
    *bin = 0;
    if(num > 0){
        binary(num/2,bin);
        //printf("%d",num%2);
        *bin = *(bin)*10 + num%2;
    }
}
int main(){
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    int binary1;
    binary(num,&binary1);
    printf("%d",binary1);
}