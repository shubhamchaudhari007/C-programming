#include<stdio.h>

int getword(char *str){
    int count = 0;
    while(*str != 32 && *str != '\0'){
        count++;
        str++;
    }
    *str = '\0';

    // while(*str!= '\0'){
    //     if(*str == 32){
    //         *str = '\0';
    //         break;
    //     }
    //     str++;
    // }
    return count;
}

int main(){
        int len = 0;
	    char str[100];

		printf("Enter the string : ");
		scanf(" %[^\n]", str);

		len = getword(str);

        printf("You entered %s and the length is %d\n", str, len);

}