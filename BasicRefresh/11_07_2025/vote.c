#include<stdio.h>
int main(){
	int age;
	printf("enter your age to check your eligible to vote or not\n");
	scanf("%d",&age);

	if(age>=18){
		printf("you are eligible to vote");
	}else{
		printf("you're not eligible to vote");
	}


}
