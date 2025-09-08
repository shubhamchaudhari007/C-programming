#include<stdio.h>

char *strtoken(char *str,char *delim){
    int i = 0;
    static char *start;
    //char *end;
    if(str != NULL){
        start = str;
    }
    if(start == NULL){
        return NULL;
    }
    str = start;

    if(*str == '\0'){
        start = NULL;
        return NULL;
    }
    
    while(str[i] != '\0'){
        int j = 0;
        while(delim[j] != '\0'){
            if(str[i] == delim[j]){
                str[i] = '\0';
                i++;
                start = &str[i];
                if(*str != '\0'){
                    return str;
                }else{
                    str = start;
                    i = 0;
                    j = -1;
                }
            }
            j++;
        }
        i++;
    }

    start = NULL;     
    return str;
}

int main(){
    char str1[200];
    char delim[200];

    scanf("%[^\n]",str1);
    getchar();

    scanf("%[^\n]",delim);
    getchar();
    char *token ;
    token = strtoken(str1,delim);
    //printf("%s",token);

     while(token != NULL){
        printf("%s\n",token);
        token = strtoken(NULL,delim);
    }

}