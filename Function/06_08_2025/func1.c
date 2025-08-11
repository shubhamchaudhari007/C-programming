#include<stdio.h>
int sum1(int,int);
int main(){
	int a=20,b=20;
	int sum = 0;
	sum = sum1(a,b);
	printf("%d",sum);
	
}
int sum1(int num,int num1){
	int sum1 = 0;
	int mul;
	sum1 = num+num1;
	printf("%d\n",sum1);
//	mul = num*num1;
//	return 0;	
}
