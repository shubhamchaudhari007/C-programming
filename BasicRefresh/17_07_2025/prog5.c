#include<stdio.h>
int main(){
	int num;
	printf("enter number to check even or odd\n");
	scanf("%d",&num);

	if(num%2==0){
		printf("is even number");
	}else{
		printf("is odd number");
	}
}
