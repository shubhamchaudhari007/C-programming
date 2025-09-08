#include<stdio.h>

int my_isalnum(char ch){
    if((ch >=65 && ch <=90 )||(ch >= 97 && ch<=122) || (ch >= 48 && ch<=57))
    return 1;
    else
    return 0;
}

char my_islower(char ch){
    if(ch >= 65 && ch <= 90)
    return ch+32;
    else
    return ch;
}

int length(char *str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

int palindrome(char *str){
    int i = 0;
    int j = length(str)-1;
    int flag;
    while(i<j){
        flag = 1;
        if(!my_isalnum(str[i])){
            i++;
        }else if(!my_isalnum(str[j])){
            j--;
        }else{ 
            if(my_islower(str[i]) != my_islower(str[j])){
            flag = 0;
            break;
            }
            i++;
            j--;
        }
    }
    return flag;
}

int main(){
    char str[100];
    printf("Enter String : ");
    scanf("%[^\n]",str);

    int x = palindrome(str);
    if(x){
        printf("palindrome");
    }else{
        printf("not a palindrome");
    }
}