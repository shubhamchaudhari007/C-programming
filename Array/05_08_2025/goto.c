#include<stdio.h>
int main(){
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	
	if(num2==0)
		goto error;
		printf("%d",num1/num2);
		return 0;
	
	error:
		printf("divide by zero");

	
		

}
