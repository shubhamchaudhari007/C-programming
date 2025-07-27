#include<stdio.h>
int main(){
	int num ,fact=1;
	printf("enter number to print factorial of number\n");
	scanf("%d",&num);

	for(int i=1;i<=num;i++){
		fact = fact*i;
	}
	printf("%d",fact);
}
