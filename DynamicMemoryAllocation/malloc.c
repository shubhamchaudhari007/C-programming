#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int arr[10] = {0};
    // ptr = malloc(20);
    // // free(ptr);
    // ptr = malloc(20);
    // for(int i=0;i<5;i++){
    // printf("%d ",ptr[i]);
    // }
    ptr = realloc(arr,50);


}