#include<stdio.h>
int main(){
	char n;
	int num1,num2;
	int choice;

	do{	
	printf("enter your choice for operation\n");
	printf("1.addition \n2.substraction\n3.multiplication\n4.division\n ");
	scanf("%d",&choice);
	
	
	printf("enter two numbers\n");
	scanf("%d %d",&num1,&num2);

	switch(choice){
		case 1:
			printf("%d",num1+num2);
			break;
		case 2:
			printf("%d",num1-num2);
			break;
		case 3:
			printf("%d",num1*num2);
			break;
		case 4:{
			if(num2!=0){
			printf("%d",num1/num2);
			}else{
				printf("num2 is zero");
			}
		}
			break;
		default :
			printf("enter valid choice number");
			break;
	}

	
	printf("\nif want to continue Y want exit N\n");
	scanf(" %c",&n);
	}
	while(n == 'y' || n=='Y');
	printf("\nexited from program");
}
