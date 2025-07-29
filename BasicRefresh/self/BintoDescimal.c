#include<stdio.h>
int main(){
	int num,rem ,base = 1,sum = 0;
	scanf("%d",&num);
	while(num!=0){
		rem = num%10;
		sum = sum + rem * base;
		base = base*2;
		num = num/10;
	}
	printf("%d",sum);
}
