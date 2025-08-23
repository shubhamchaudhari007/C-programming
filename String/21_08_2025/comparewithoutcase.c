#include<stdio.h>

int compare(char *p1,char *p2){
    int flag = 0;
    while(*p1 != '\0' && *p2 != '\0'){
        if(*p1 == *p2 || *p1+32 == *p2 || *p1 == *p2+32 || *p1-32 == *p2 || *p1 == *p2-32){
            flag = 1;
            
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
    char str1[20];
    char str2[20];
    printf("Enter String1 : ");
    //scanf("%s",str1);
    scanf("%[^\n]",str1);
    getchar();
    printf("Enter String2 : ");
    //scanf("%s",str2);
    scanf("%[^\n]",str2);
    getchar();
    
    if(compare(str1,str2)){
        printf("Same Strings");
    }else{
        printf("Different Strings");
    }

}