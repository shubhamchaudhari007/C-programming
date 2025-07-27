#include<stdio.h>
int main(){
	int a;
	a = (5,4);
	printf("%d amswer\n",a);

	int b = (4,5);
	printf("%d answer of b\n",b);

	int c;
	c= printf("jenny"),2,3,4;
	printf("%d answer of c\n",c);

	int x = 8,p;
	p = (x++,++x,x>>2);
	printf("%d ans of p",p);
}
