#include<stdio.h>

int length(char *str){
    int i=0;
    while(*str != '\0'){
        i++;
        str++;
    }
    return i;
}

void reverse(char *str,int i,int j){

    if(i < j){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
       // reverse(str,i+1,j-1);
       reverse(str,++i,--j);
    }
    return;
}

int main(){
    char str[200];
    printf("Enter String : ");
    scanf("%[^\n]",str);

    int size = length(str);
    //printf("%d",size);
    reverse(str,0,size-1);

    printf("%s",str);

}