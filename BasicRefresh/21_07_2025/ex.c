#include<stdio.h>
int main(){
	char c;

	do{
		printf("enter character y to continue and n for exit\n");
		scanf("%c",&c);
		getchar();
		printf("%c \n",c);
	}while(c == 'y');

	printf("exit from program");
}
