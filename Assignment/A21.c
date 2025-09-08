#include<stdio.h>
void replace_blank(char *str){
    for(int i=0;str[i] != '\0';i++){
        if(str[i] == 32 || str[i] == 9){
            str[i] = 32;
            if(str[i+1] == 32 || str[i+1] == 9){
                for(int j=i;str[j]!='\0';j++){
                    str[j] = str[j+1];
                }
                i--;
            // }else if(str[i+1] == 9){
            //     str[i+1] = 32;
            //     i--;
            }
        }
    }
}
int main(){
    char str[100];
    printf("Enter string : ");
    scanf("%[^\n]",str);

    replace_blank(str);
    printf("%s",str);
}