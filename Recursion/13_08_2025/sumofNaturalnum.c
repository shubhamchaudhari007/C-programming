#include<stdio.h>

int sumn(int n){
	if(n==1)
		return 1;
	else
		return n+sumn(n-1);
}

int main(){
	int x;
	printf("Enter number : ");
	scanf("%d",&x);

	int sum = sumn(x);
	printf("Result : %d ",sum);
}
