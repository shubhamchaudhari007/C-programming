#include<stdio.h>

int length(char *str){
    int i=0;
    while(*str != '\0'){
        i++;
        str++;
    }
    return i;
}

void concat(char *str1,char *str2){
    int index = length(str1);
    int i = 0;
    while(str2[i] != '\0'){
        str1[index] = str2[i];
        i++;
        index++;
    }
    str1[index] = '\0';
}

int main(){
    char str1[200];
    char str2[200];
    printf("Enter String1 :");
    scanf("%[^\n]",str1);
    getchar();
    printf("%d",length(str1));
    printf("Enter String2 :");
    scanf("%[^\n]",str2);
    getchar();

    concat(str1,str2);

    printf("%s",str1);
}