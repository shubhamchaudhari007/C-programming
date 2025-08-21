#include<stdio.h>

int power(int base,int expo){
    if(expo <= 0){
        return 1;
    }else{
        return base * power(base,expo-1);
    }
}
int main(){
    int base , exponent;
    printf("Enter the base and Exponent : ");
    scanf("%d %d",&base,&exponent);

    printf(" result : %d",power(base,exponent));
}