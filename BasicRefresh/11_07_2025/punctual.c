#include<stdio.h>
int main(){

	char c;
	printf("enter character to check punctuation or not\n");
	scanf("%c",&c);

	if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9')){
		printf("%c is not punctuation",c);
	}
	else{
		printf("%c is punctuation or symbol",c);
	}

}
