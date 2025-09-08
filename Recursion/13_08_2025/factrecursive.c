#include<stdio.h>

int fact(int n){
	if(n==0)
		return 1;
	else 
		return n*fact(n-1);
}

int main(){
	int x;
	printf("Enter number to find factorial : ");
	scanf("%d",&x);

	int facto = fact(x);
	printf("Factorial of num : %d ",facto);
}
