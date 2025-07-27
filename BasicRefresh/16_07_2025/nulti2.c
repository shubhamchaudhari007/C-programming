#include<stdio.h>
int main(){
	int num1,num2;
	printf("enter two numbers to multiply\n");
	scanf("%d %d",&num1,&num2);
	int result=0;
	for(int i=1;i<=num2;i++){
		result +=num1;
	}
	printf("answer is %d",result);
}
