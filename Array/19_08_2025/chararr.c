#include<stdio.h>

void print_chars(char *arr,int n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}

int main(){
    int n = 5;
    char arr[n];
    printf("Enter characters : ");
    for(int i=0;i<n;i++){
        scanf("%c",&arr[i]);
        
    }

    print_chars(arr,n);

}