#include<stdio.h>
int main(){
	int num;
	printf("enter nuber to print natural numbers from num to 1\n");
	scanf("%d",&num);

	for(int i=num;i>=1;i--){
		printf("%d ",i);
	}
}
