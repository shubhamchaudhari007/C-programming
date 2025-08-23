/*

WAP to check if character is found in a string

Instructions: Read the string and character from the user

Eg:

Enter the string : We are searching for a character

Entre a character : r

Output : re searching for a character

*/

#include<stdio.h>

void search(char *str,char ch){
    int flag = -1,i=0;
    
    while(str[i] != '\0'){
        if(str[i] == ch){
            flag = i;
            break;
        }
        i++;
    }
    if(flag == -1){
        printf("character is not found in the string");
        return;
    }
      printf("%s",&str[flag]);
    
}
int main(){
    char str[200];
    //printf("Enter the string : ");
    scanf("%[^\n]",str);
    getchar();
    
    char ch;
    //printf("Enter a character : ");
    scanf("%c",&ch);
    
    search(str,ch);
}