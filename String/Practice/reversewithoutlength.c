#include<stdio.h>

void reverse(char *str){
    char *end = str;
    while(*end != '\0'){
        end++;
    }
    end--;

    while(str < end){
        char temp = *str;
        *str = *end;
        *end = temp;
        str++;
        end--;
    }
}

int main(){
    char str[100];
    printf("Enter a string : ");
    scanf("%[^\n]",str);

    reverse(str);
    printf("%s",str);
}