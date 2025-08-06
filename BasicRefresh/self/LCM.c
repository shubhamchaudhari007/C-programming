#include<stdio.h>
int main(){
	int num1,num2,gcd,lcm;
	scanf("%d %d",&num1,&num2);

	int min = (num1<num2)?num1:num2;

	for(int i=1;i<=min;i++){
		if(num1%i==0 && num2%i==0){
			gcd = i;
		}
	}
	lcm = (num1*num2)/gcd;
	printf("%d %d",gcd,lcm);
}
