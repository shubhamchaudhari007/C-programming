#include<stdio.h>
int main(){
	int bill_amount;
	printf("enter total bill amount\n");
	scanf("%d",&bill_amount);

	if(bill_amount>3000){
		printf("you are eligible for 30%% discount\n");
	}else if(bill_amount>2000){
		printf("you are eligible for 20%% discount\n");
	}else if(bill_amount > 1000){
		printf("you are eligible for 10%% discount\n");
	}else{
		printf("NO discount\n");
	}
}
