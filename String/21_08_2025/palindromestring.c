#include<stdio.h>
int length(char *str){
    int i=0;
    while(*str != '\0'){
        i++;
        str++;
    }
    return i;
}
int palindrome(char *p1,int n){
    int flag = 1;
    for(int i=0;i<n/2;i++){
        if(p1[i] != p1[n-1-i])
        flag = 0;
        break;
    }
    if(flag)
    return 1;
    else
    return 0;
}
int main(){
    char str1[100];
    printf("Enter a String : ");
    scanf("%[^\n]",str1);
    getchar();
    int lengths = length(str1);
    if(palindrome(str1,lengths)){
        printf("String is palindrome");
    }else{
        printf("String is not a palindrome");
    }
}