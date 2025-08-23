#include<stdio.h>

int length(char *str){
    int i=0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

int substring(char *str1,char *str2){
    int found = -1;
    int size1 = length(str1);
    //printf("%d",size1);
    int size2 = length(str2);
    // printf("%d",size2);
    for(int i=0;i<size1-size2+1;i++){
        int flag = 1;
        for(int j=0;j<size2;j++){
            if(str1[i+j] != str2 [j]){
                flag = 0;
                break;
            }
        }
        if(flag){
            found = i;
            break;
        }
    }
    return found;
}
int main(){
    char str1[100];
    printf("Enter a string1 : ");
    scanf("%[^\n]",str1);
    getchar();
    char str2[100];
    printf("Enter a string2 : ");
    scanf("%[^\n]",str2);
    getchar();

    // int result = substring(str1,str2);
    // if(result){
    //     printf("%s is substring of %s",str2,str1);
    // }else{
    //     printf("%s is not a substring of %s",str2,str1);
    // }

    int result = substring(str1,str2);
    if(result != -1)
        printf("%s",&str1[result]);
    else
        printf("Sub string not found");
}