#include<stdio.h>
int main(){
	int num = 0x12345678;
	int *ptr = &num;

	char *chtr = &num;

	printf("address of num = %p\n",ptr);
	printf("num = %x\n",*ptr);
	printf("num = %x\n",*chtr);
	printf("address of num = %p",chtr);
	chtr++;
	printf("num = %x\n",*chtr);
	printf("address of num = %p",chtr);
	chtr++;
	printf("num = %x\n",*chtr);
	printf("address of num = %p",chtr);
	chtr++;
	printf("num = %x\n",*chtr);
	printf("address of num = %p",chtr);
	
	//printf("num = %x\n",*chtr);
	//printf("address of num = %p",chtr);

}
