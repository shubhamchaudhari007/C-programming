#include<stdio.h>
int main(){
    char str[10];
    scanf("%[^\n]",str);

   // printf("%s",str);
    printf("%s",&str[1]);
}