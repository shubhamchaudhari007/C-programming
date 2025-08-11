#include<stdio.h>
int main(){
	int n = 123;
	
	long int var = &n;
	int *ptr;
	ptr = &n;
	*ptr = &n;
	printf("%p \n",ptr);
	printf("%x ",*ptr);
	printf("%x ",n);

}
