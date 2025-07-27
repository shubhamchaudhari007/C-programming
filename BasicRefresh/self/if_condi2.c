#include<stdio.h>
int main(){
	int amount = 1000,choice,x;
	printf("choose option to perform operation\n");
	printf("1.Widrawal 2.deposit 3.check balance 4.exit\n");
	scanf("%d",&choice);

	if(choice == 1){
		printf("enter amount to widraw \n");
		scanf("%d",&x);
		amount = amount - x;
		printf("transaction successful!\n");
		printf("%d is your balance",amount);
	}
	if(choice == 2){
		printf("enter amount to deposit");
		scanf("%d",&x);
		amount = amount + x;
		printf("transaction successful!\n");
		printf("%d is your balance",amount);
	}
	if(choice == 3){
		printf("%d is your balance",amount);
	}
	if(choice == 4){
		printf("exit successfully!\n");
	}
	
}
