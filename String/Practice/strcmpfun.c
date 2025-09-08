#include<stdio.h>
#include<string.h>

int my_strcmp(char *str1,char *str2){
    int result = 0;
    while(*str1 != '\0' || *str2 !='\0' ){
        if(*str1 != *str2){
            result = *str1 - *str2;
            break;
        }
        str1++;
        str2++;
    }
    return result;
}
int main(){
    char str1[100];
    char str2[100];
    printf("Enter string 1 : ");
    scanf("%[^\n]",str1);
    getchar();
    printf("Enter string 2 : ");
    scanf("%[^\n]",str2);
    getchar();
    int x = my_strcmp(str1,str2);
    printf("%d",x);


}