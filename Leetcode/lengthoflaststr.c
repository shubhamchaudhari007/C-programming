#include<stdio.h>
#include<string.h>

int length(char *str){
    int i=0;
    while(*str != '\0'){
        str++;
        i++;
    }
    return i;
}

int lengthOfLastWord(char* s) {
    int i = length(s)-1;
    //printf("%d",i);
    int j=0;
    while(i>=0 && s[i] == 32){
        i--;
    }
    while(i>=0 && s[i] != 32){
        j++;
        i--;
    }
    return j;
}

int main(){
    char str[100];

    scanf("%[^\n]",str);
    getchar();
    int x = lengthOfLastWord(str);
    printf("%d",x);
}