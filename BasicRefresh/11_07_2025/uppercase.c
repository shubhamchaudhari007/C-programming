#include<stdio.h>
int main(){
	char ch;
	
	printf("enter character to check:\n");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z'){
		printf("%c is uppercase character",ch);
	}
	else{
		printf("%c is lowercase character",ch);
	}
}
