#include<stdio.h>

int length(char *str){
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

// void combination(char *str,int start,int end){
//     if(start == end){
//         printf("%s\n",str);
//         return;
//     }
//     for(int i = start;i<=end;i++){
//         swap(str,start,i);
//         combination(str,start+1,end);
//         swap(str,start,i);
//     }
// }

int main(){
    char str[100];
    printf("Enter String : ");
    scanf("%[^\n]",str);
    int n = length(str)-1;
    //combination(str,0,n);

    for(int i=0;i<)

}