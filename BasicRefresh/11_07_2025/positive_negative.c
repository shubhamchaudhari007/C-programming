/* check whether number is positive or negative */

#include<stdio.h>
int main(){
	int x;
	printf("enter number to check \n");
	scanf("%d",&x);

	if(x>=0){
		printf("%d is positive",x);
	}else{
		printf("%d is negative",x);
	}
}
