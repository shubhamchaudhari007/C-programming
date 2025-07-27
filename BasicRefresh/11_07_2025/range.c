/* WAP to check whether number is in range of 10 - 20 or not */

#include<stdio.h>
int main(){

	int num;
	printf("enter number to check\n");
	scanf("%d",&num);

	if(num>=10 && num<20){
		printf("%d is in range\n",num);
	}else{
		printf("%d not in range\n",num);
	}	
}
