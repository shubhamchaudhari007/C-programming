#include<stdio.h>

int main(){
	int c = 10;
	int a = -c;

	//printf("%d",a);

	int x = 11;
	int y = 11;
	
	//printf("%d\n",++x);
	//printf("%d\n",x++);

	int *ptr = &x;	
	//printf("%hhd\n",!(x<c));
	printf("%d\n",&x);
	printf("%d\n",&y);
	//printf("%d\n",&a);
	//printf("%d\n",&c);

	char g = (x<c)? 't' : 'f';

	printf("%c",g);
}
