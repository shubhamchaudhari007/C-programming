#include<stdio.h>
int main(){
	int num;
	

	printf("enter number to check palindrome or not\n");
	scanf("%d",&num);
	int num1=num;
	int rem=0,result=0;
	while(num!=0){
		rem = num%10;
		result = result*10+rem;
		num=num/10;
	}
	
	
	if(num1 == result){
		printf("number is palindrome number\n");
	}else{
		printf("number is not palindrome number\n");
	}

}
