#include<stdio.h>

int count_char(char *arr,int n,char ch){
    int count=0;
    for(int i=0;i<n;i++){
        if(ch == arr[i])
        count++;
    }
    return count;
}

int main(){
    int n = 5;
    char arr[n];
    char ch = 'A';
    printf("Enter characters : ");
    for(int i=0;i<n;i++){
        scanf("%c",&arr[i]);
        
    }

    printf("%d",count_char(arr,n,ch));

}