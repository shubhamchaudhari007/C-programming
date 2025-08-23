#include<stdio.h>

int compare(char *p1,char *p2){
    int flag = 1;
    while(*p1 != '\0' || *p2 != '\0'){
        if(*p1 != *p2){
            flag = 0;
            break;
        }
        p1++;
        p2++;
    }
    if(flag)
        return 1;
    else
        return 0;
}

int main(){
    char str1[10];
    char str2[10];
    scanf("%s",str1);
    scanf("%s",str2);

    
    if(compare(str1,str2)){
        printf("Same Strings");
    }else{
        printf("Different Strings");
    }

}