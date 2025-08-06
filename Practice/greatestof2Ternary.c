#include<stdio.h>
int main(){
	int a;
	int b;
	scanf("%d %d",&a,&b);

	int c = (a>b)?a:b;
	printf("the greatest is %d",c);
}
