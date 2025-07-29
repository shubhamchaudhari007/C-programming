#include<stdio.h>
int main(){
	char ch = 200;
	char ch2 = 200;
	
	char ch1 = ch+ch2;
	printf("%c ",ch1);
	printf("%ld",sizeof(ch+ch2));
	printf("%ld",sizeof(ch1));
}
