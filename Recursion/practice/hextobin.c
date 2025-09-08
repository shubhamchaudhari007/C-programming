#include<stdio.h>

// void hextobin(int digit,int size){
//     if(size < 0)
//     return;
//     hextobin(digit/2,size-1);
//     printf("%d",digit%2);
// }

void hextobin(int digit,int *count){
    if(*count > 32)
    return;
    (*count)++;
    hextobin(digit/2,count);
    printf("%d",digit%2);
}

int main(){
    int num;
    scanf("%x",&num);
    int count = 1;
    int digit = num;
    hextobin(digit,&count);
}