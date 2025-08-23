#include<stdio.h>
#include<string.h>
int main(){
    char str[40] = "shubham,22,7757949350";
    char *token;
    token = strtok(str,",");

    while(token != NULL){
        printf("%s\n",token);
        token = strtok(NULL,",");
    }
}