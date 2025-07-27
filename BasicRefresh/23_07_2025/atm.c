#include<stdio.h>
int main(){
	int user,amount;
	int successcount = 0;

	for(user=1;user<=10;user++){
		printf("user %d : enter withdrawal amount :",user);
		scanf("%d",&amount);

		if(amount == 0){
			printf("Invalid amount !Skiping user %d .. \n",user);
			continue;
		}
		if(successcount == 5){
			printf("ATM out of cash! stopping further transaction \n");
			break;
		}

		printf("processing withdrawal of %d for user %d .. \n",amount ,user);
		successcount++;
	}
	printf("\n total successful withdrawal: %d\n",successcount);
	return 0;

}
