#include<stdio.h>
int main(){

	int num;
	printf("enter number to check factor of 5 or 3 \n");
	scanf("%d",&num);

	if(num%3==0 || num%5==0){
		printf("%d is a factor of 3 or 5\n",num);
	}
	else{
		printf("%d is not factor of 3 or 5 \n",num);
	}

}
