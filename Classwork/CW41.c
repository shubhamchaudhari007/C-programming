#include<stdio.h>

int length(char *str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

void reversestr(char *str,char *str2){
    int size = length(str)-1;
    int i= 0,j = 0,k;
    while(str[i] != '\0'){
        if(str[i] == 32 || i== size){
            if(i == size)
            k = i;
            else
            k = i-1;
            while(k != -1 && str[k] != 32){
                str2[j] = str[k];
                j++;
                k--;
            }
            str2[j] = 32;
            j++;
        }
        i++;
    }
    str2[j] = '\0';
}

int main(){
    char str[100];
    printf("Enter string : ");
    scanf("%[^\n]",str);
    getchar();

    char str2[100];
    reversestr(str,str2);

    printf("%s",str2);

}