/*

WAP to read  and print value of a character variable using pointer

Eg:

Enter the input  : A

Character entered is A

*/

#include<stdio.h>
int main(){
    char ch;
    printf("Enter the input : ");
    scanf("%c",&ch);
    
    char *ptr = &ch;
    
    printf("Character entered is %c",*ptr);
}