#include<stdio.h>
int main(){
	
	int num;
	printf("emter number to check aplindrome or not\n");
	scanf("%d",&num);

	int num1 = num;
	int rem,result=0;

	do{
		rem=num%10;
		result = result*10+rem;
		num=num/10;
	}while(num!=0);

	if(result == num1){
		printf("palindrome number %d ",num1);
	}
	else{
		printf("not a palindrome number %d",num1);
	}
}
