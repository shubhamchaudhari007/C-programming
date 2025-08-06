#include<stdio.h>
int main(){
	int a = 0x00000000;
	int b = 0x00000002;
	if((a & b)||(a = b = 0)){
		printf("Hello a = %d b = %d\n",a,b);
	}
		printf("world a = %d b = %d\n",a,b);

}
