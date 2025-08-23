#include<stdio.h>

void copy(char *str,char *str2){
    int i=0;
    while(str[i] != '\0'){
        str2[i] = str[i];
        i++;
    }
    str2[i] = '\0';
}

int main(){
    char str[200];
    printf("Enter String : ");
    scanf("%[^\n]",str);
    getchar();
    char str1[200];
    // printf("Enter String2 : ");
    // scanf("%[^\n]",str1);
    // getchar();
    copy(str,str1);
    printf("%s",str1);

}