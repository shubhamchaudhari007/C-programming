#include<stdio.h>

void mystrcpy(char *des,char *sur){
    int i = 0;
    while(sur[i] != '\0'){
        des[i] = sur[i];
        i++;
    }
    des[i] = '\0';
}
int main(){
    char str[100];
    char copy[100];
    printf("Enter string to copy : ");
    scanf("%[^\n]",str);
    getchar();
    //mystrcpy(copy,str);
    mystrcpy(copy,"shubs");
    printf("%s",copy);
}