#include<stdio.h>
#include<stdbool.h>
int fun(int n){
	if(n%2==0)
		return 1;
	else
		return 0;
}

int main(){
	int num;
	printf("Enter number :");
	scanf("%d",&num);
	if(fun(num))
		printf("even");
	else	
		printf("odd");
}
