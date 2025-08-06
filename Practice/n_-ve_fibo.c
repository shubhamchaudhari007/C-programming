#include<stdio.h>
int main(){
	int a = 0,sum;
	int b = -1;
	int num;
	scanf("%d",&num);

	for(int i=1;i<=num;i++){
		printf("%d ",a);
		sum = a + b;
		a = b;
		b = sum;
	}
}
