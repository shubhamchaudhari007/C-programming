#include<stdio.h>

void itoa(int num, char str[]){
    int i = 0,j= 0;
    if(num < 0){
        num = num* (-1);
        str[i] = '-';
        i++;
        j = 1;
    }
    
    while(num != 0){
        int rem = num %10;
        str[i] = rem+48;
        num = num/10;
        i++;
    }
    str[i] = '\0';
    i--;
    
    while(j < i){
        int temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        j++;
        i--;
    }
}

int main(){
    int num;
    char str[10];
    
    printf("Enter the number:");
    scanf("%d", &num);
    
    itoa(num, str);
    
    printf("Integer to string is %s", str);
}