#include<stdio.h>
int main(){

	char ch;
	printf("enter character to check\n");
	scanf("%c",&ch);

	if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z')|| (ch>='0' && ch<='9')){
		printf("%c is alphanumeric character",ch);
	}else{
		printf("%c is not alphanumeric",ch);
	}

}
