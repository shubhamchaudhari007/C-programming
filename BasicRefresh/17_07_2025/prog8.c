#include<stdio.h>
int main(){
	int num;
	printf("enter number to check prime or not\n");
	scanf("%d",&num);
	int count = 0;
	for(int i=1;i<=num;i++){
		if(num%i==0){
			count ++;
		}
	}

	if(count == 2){
		printf("number is prime");
	}
	else{
		printf("number is not prime");
	}
}
