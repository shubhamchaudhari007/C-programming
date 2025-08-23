/*

WAP to print the string character by character using a function

*/

#include<stdio.h>
void printstr(char *str){
    int i = 0;
    while(str[i] != '\0'){
        printf("%c",str[i]);
        i++;
    }
}
int main(){
    char str[20]; 
    scanf("%[^\n]",str);
    printstr(str);
    
}