/*

WAP to check if the system is little or big endian  

1. Take a integer variable and store the value as 0x12345678

2. take a characater pointer and make it point to the integer variable

3. Dereference and compare whether the value is 0x78, if yes print it as little endian system

     else print it as big endian system

Eg:

Output : It is little endian system

*/

#include<stdio.h>
int main(){
    int a = 0x12345678;
    
    char *ptr = &a;
    
    if(*ptr == 0x78){
        printf("It is little endian system");
    }
    else{
        printf("It is big endian system");
    }
}