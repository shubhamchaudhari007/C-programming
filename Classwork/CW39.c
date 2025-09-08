#include<stdio.h>

int length(char *str){
    int i=0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}
void myreverse(char *str1,char *str2){
    int size = length(str1)-1;
    //int j = str1[0];
    int k = 0,i;
    while(size >= 0){
        if(str1[size] == 32 || size == 0){
            if(size == 0)
            i = size;
            else
            i = size + 1;
            
            while(str1[i] != 32 && str1[i] != '\0'){
                str2[k] = str1[i];
                i++;
                k++;
            }
            str2[k] = 32;
            k++;
        }
        size--;
    }
    str2[k-1] = '\0';
}
int main(){
    char str1[100];
    char reverse[100];

    printf("Enter String : ");
    scanf("%[^\n]",str1);

    myreverse(str1,reverse);

    printf("%s",reverse);
}