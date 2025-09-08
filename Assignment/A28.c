#include<stdio.h>
void squeeze(char *str1, char *str2){
    int i=0;
    while(str1[i] != '\0'){
        int j=0;
        while(str2[j] != '\0'){
            if(str1[i] == str2[j]){
                for(int k=i;str1[k]!= '\0';k++){
                str1[k] = str1[k+1];
                }
                i--;
            }
            j++;
            
        }
        i++;
    }
}
int main(){
    char str1[30], str2[30];
    
    printf("Enter string1:");
    scanf("%[^\n]",str1);
    getchar();

    printf("Enter string2:");
    scanf("%[^\n]",str2);
    getchar();
    squeeze(str1,str2);
    
    printf("After squeeze s1 : %s\n", str1);
}
