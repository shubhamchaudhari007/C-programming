#include<stdio.h>
int main(){
    char str[] = {"hello"}; 
    printf("%ld",sizeof(str));

    printf("%ld",sizeof("hello""world"));
    char str2[6];
    str2[0] = 'W';
    printf("%s",str2);

    char *str1;
    //char *str3;
    str1 = "hello";
    str1 = "World";
   // printf("%s",str1);

    str1[0] = 'w';
     printf("%s",str1);

}