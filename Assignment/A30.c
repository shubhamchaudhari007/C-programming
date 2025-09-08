#include<stdio.h>

int pangram(char *str){
    int index = 0;
    for(int i=65,j=97;i<=90;i++,j++){
        int flag = 0;
        for(int k=0;str[k]!='\0';k++){
            if(i==str[k] || j==str[k]){
                flag = 1;
                break;
            }
        }

        if(flag == 0){
            index = 1;
            break;
        }
    }
    return index;
}

int main(){
    char str[100];
    scanf("%[^\n]",str);

    int x = pangram(str);
    //printf("%d",x);
    if(x){
        printf("not a panagram");
    }else{
        printf("panagram");
    }

}