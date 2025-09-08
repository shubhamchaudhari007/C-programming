#include<stdio.h>
#include<stdlib.h>
char* convertToTitle(int columnNumber) {
    int index = 0;
    char *str;
    str = malloc(8);
    while(columnNumber > 26){
       // columnNumber--;
        str[index] = columnNumber%26+ 64;
        index++;
        columnNumber /= 26;
    }
    str[index++] = columnNumber+64; 
    str[index] = '\0';
    int i = 0;
    int j = index-1;
    while(i<j){
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return str;
}

int main(){
    int num;
    scanf("%d",&num);

    printf("%s",convertToTitle(num));
}