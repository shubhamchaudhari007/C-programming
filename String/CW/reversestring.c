#include<stdio.h>

int length(char *str){
    int i=0;
    while(*str != '\0'){
        i++;
        str++;
    }
    return i;
}

void reverse(char *str,int size){
    for(int i=0;i<size/2;i++){
        char temp = str[i];
        str[i] = str[size-1-i];
        str[size-1-i] = temp;
    }
}

int main(){
    char str[40];

    printf("Enter a String : ");
    scanf("%[^\n]",str);
    int size = length(str);
    printf("after String reverse : ");
    reverse(str,size);
    printf("%s",str);
}