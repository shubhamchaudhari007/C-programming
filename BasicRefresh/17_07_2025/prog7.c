#include<stdio.h>
int main(){
	int num;
	printf("enter value to print count of factors\n");
	scanf("%d",&num);
	int count = 0;
	for(int i=1;i<=num;i++){
		if(num%i==0){
			count++;
		}
	}
	printf("%d",count);
}
