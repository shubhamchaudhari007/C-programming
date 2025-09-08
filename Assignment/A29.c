#include<stdio.h> 

void combination(char [],int ,int );
int my_strlen(char []);

int main()

{
        char str[100];
        int n;
        int res;
        printf("Enter a string: ");
        scanf("%100[^\n]",str);    
        n = my_strlen(str);
        combination(str,0,n-1);                       
        return 0;
}

int my_strlen(char *str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}
void swap(char *str,int start,int end){
    int temp = str[start];
    str[start] = str[end];
    str[end] = temp;
}

void combination(char *str,int start,int end){
    if(start == end){
        printf("%s\n",str);
        return;
    }
     for(int i=start;i<=end;i++){
        swap(str,start,i);
        
        combination(str,start+1,end);
        swap(str,start,i);
    }
}