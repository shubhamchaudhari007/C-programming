#include<stdio.h>
int main(){
	int num,sum=0;
	printf("enter n to print sum of natural numbers from 0 to n\n");
	scanf("%d",&num);

	for(int i=1;i<=num;i++){
		sum = sum+i;
	}
	printf("%d",sum);
}
