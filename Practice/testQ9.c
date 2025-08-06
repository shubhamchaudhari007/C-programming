#include<stdio.h>
int main(){
	int y=2,z;
	z = (y+(y=10));
	printf("%d",z);
}
