#include<stdio.h>
int main(){
	int num,sum=0;
	printf("enter number to print sum of factors\n");
	scanf("%d",&num);

	for(int i=1;i<=num;i++){
		if(num%i==0){
			sum = sum+i;
		}
	}
	printf("%d",sum);
}
