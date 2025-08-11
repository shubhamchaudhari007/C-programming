#include<stdio.h>
int main(){
	int n = 0x12345678;
	int *ptr = &n;
	char *cptr = &n;
	short *sptr = &n;

	printf("Address of n : %p\n",ptr);
	printf("value of n : %x\n",*ptr);
	printf("Address of n : %p\n",sptr);
	printf("value of n in short * : %x\n",*sptr);
	printf("Address of n : %p\n",cptr);
	printf("Address of n : %x\n",cptr[2]);

	cptr[2] = 0x38;
	printf("Address of n : %p\n",cptr);
	printf("Address of n : %x\n",cptr[2]);


	printf("Address of n : %p\n",ptr);
	printf("value of n : %x\n",*ptr);
}
