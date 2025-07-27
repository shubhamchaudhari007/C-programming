#include<stdio.h>
int main(){
	int num;
	printf("enter number\n");
	scanf("%d",&num);
	if(num == 0){
		printf("neither even nor odd");
	}else if(num > 0){
		if(num % 2 == 0){
			printf("%d is positive even",num);
		}else{
			printf("%d is positive odd",num);
		}
	
	}
	else{
		if(num%2==0){
			printf("%d is negative even",num);
		}else{
			printf("%d is negative odd",num);
		}
	}
}
