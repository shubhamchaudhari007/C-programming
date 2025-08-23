/*

WAP to check if the system is little or big endian

O/P: ours is a little endian system 

*/

#include<stdio.h>
int main(){
    int num = 0x12345678 ;
    char *ptr = (char*)&num;
    //printf("%d",*ptr);
    if(*ptr == 0x78){
        printf("Ours is a little endian");
    }else{
        printf("Ours is a big endian");
    }
    
}