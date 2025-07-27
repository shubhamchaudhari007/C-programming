/*Write a program to check whether value is digit character or not */


#include<stdio.h>
int main(){
	char c;
	printf("check character digit value \n");
	scanf("%c",&c);

	if(c>=48 && c<=57){
		printf("%c is digit character \n", c);
	}else{
		printf("%c is not digit character",c);

	}

}


