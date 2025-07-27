#include<stdio.h>
int main(){
    int a = 5, b = 10, c=8;
    int max = (a > b)?(a > c ? a : c):(b > c ? b : c);

    printf("max = %d\n",max);
    return 0;
}
