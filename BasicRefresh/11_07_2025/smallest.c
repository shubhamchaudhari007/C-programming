/* WAP to check which number is smallest */

#include<stdio.h>
int main(){
	int num1,num2;

	printf("enter two numbers\n");
	scanf("%d %d",&num1,&num2);
	
	if(num1 < num2){
		printf("%d is smaller",num1);
	}else{

		printf("%d is smaller",num2);
	}
}
