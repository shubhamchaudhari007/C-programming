#include<stdio.h>
int main(){
	int num1=0;
	int num2=1;
	int fibo = 0;
	int n;
	printf("enter number :");
	scanf("%d",&n);
	if(n>=0){

	while(fibo<=n){
		printf("%d ",fibo);
		num1 = num2;
		num2 = fibo;
		fibo = num1+num2;
	}
	}else{
		printf("n is negative");
	}
}
