#include<stdio.h>
int main(){
	char ch;
	
	printf("enter character to check:\n");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z')
		printf("%c is lowercase character",ch);
	else
		printf("%c is uppercase character",ch);

}
