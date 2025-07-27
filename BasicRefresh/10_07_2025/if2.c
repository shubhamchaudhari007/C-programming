#include<stdio.h>
int main(){

	int num1,num2;
	
	printf("enter value of num1 and num2 \n");
	scanf("%d %d",&num1,&num2);

	int rem = num1%num2;

	if(rem ==0){
		printf("%d is factor of %d",num2,num1);
	}
}
