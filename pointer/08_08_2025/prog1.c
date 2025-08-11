#include<stdio.h>
int main(){
	int n = 1110;

	int *ptr = &n;

	printf("Address of n is %p \n",ptr);
	printf("n = %d \n",n);
	printf("value by *ptr = %d \n",*ptr);
	printf("size of %ld \n",sizeof(int*));

	char *chtr = &n;

	printf("Address of n is %p \n",chtr);
	printf("n = %d \n",n);
	printf("value by *ptr = %d \n",*chtr);
	printf("size of %lu",sizeof(char*));

}
