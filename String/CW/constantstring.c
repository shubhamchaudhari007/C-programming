#include<stdio.h>
int main(){
    char str1[10] = "hello";
    char str2[10] = "hello";

    char *ptr = str1;
    char *ptr1 = str2;

    printf("%p\n",ptr);
    printf("%p\n",ptr1);

    char *ptr2 = "hello";
    printf("%p\n",ptr2);

    char *ptr3 = "hello";
    printf("%p\n",ptr3);
}