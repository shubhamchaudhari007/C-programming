#include<stdio.h>
int main(){
	int num;
	printf("enter number to print its factors\n");
	scanf("%d",&num);
	int result;
	for(int i=1;i<=num;i++){
		if(num%i==0){
		printf("%d ",i);
	}
	}
}
