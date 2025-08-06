#include<stdio.h>
int main(){
	int num,power = 1,result = 0,digit;
	scanf("%d",&num);

	if(num == 0){
		printf("%d",1);
		return 0;
	}

	while(num>0){
		digit = num%10;
		if(digit == 0){
			digit = 1;
		}
		result = result + digit * power;
		power = power*10;
		num = num/10;
	}
	printf("updated number id %d ",result);

}
