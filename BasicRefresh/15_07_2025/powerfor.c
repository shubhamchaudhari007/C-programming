#include<stdio.h>
int main(){
	
	int a,b;
	printf("enter value and range");
	scanf("%d %d",&a,&b);
	int result = a;

	for(int i = 1;i<=b;i++){
		printf("%d ",result);
		result = result*a;
		
	}
}
