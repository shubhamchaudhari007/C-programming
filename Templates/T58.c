#include<stdio.h>

int length(char *str1){
    int i=0;
    while(*str1 != '\0'){
        i++;
    }
    return i;
}

void substring(char *str1,char *str2,int size1,int size2){
    
}

int main(){
    char str[100], str1[100];
    printf("Enter a String1 : ");
    scanf("%[^\n]",str);
    getchar();
    printf("Enter a String2 : ");
    scanf("%[^\n]",str1);
    getchar();

    int size1 = length(str);
    int size2 = length(str1);
    substring(str,str1,size1,size2);
}