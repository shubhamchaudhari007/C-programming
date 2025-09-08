#include<stdio.h>

int length(char *str){
    int i=0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

char *strtoken(char *str,char *delim){
    static char *start;

    if(str != NULL){
        start = str;
    }
    if(start == NULL){
        return NULL;
    }

    str = start;
    int i = 0;
    while(str[i] != '\0'){
        int j=0;
        while(delim[j] != '\0'){
            if(str[i] == delim[j]){
                str[i] = '\0';
                start = &str[i+1];
                return str;
            }
            j++;
        }
        i++;
    }
    start = NULL;
    return str;
}
int main(){
    char str[100];
    char str1[4][10] = {"Name ","Age ","Id ","Mobile No "};
    char delim[10] = {','};
    printf("Enter your details : \n");
    printf("Name , Age , ID , Mobile No \n");
    scanf("%[^\n]",str);

    int size = length(str)-1;
    int count = 0;
    while(str[size] != delim[0]){
        count++;
        size--;
    }
    if(count < 10 || count > 10){
        printf("Invalid mobile no");
        return 0;
    }
    //char *token1 = strtoken(str1,delim);
    char *token = strtoken(str,delim);
    //int count = 0;
    int i = 0;
    while(token != NULL){
        //printf("%s : ",token1);
        // count++;
        // if(count > 3){
        //     if(length(token) != 10){
        //     printf("Mobile No is not valid");

        //     break;
        //     }
            
        // }
        printf("%s : ",str1[i]);
        i++;
        printf("%s\n",token);
        
        //token1 = strtoken(NULL,delim);
        token = strtoken(NULL,delim);
    }
}