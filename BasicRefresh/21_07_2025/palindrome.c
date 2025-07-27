#include<stdio.h>
int main(){
	int num,rem;
	scanf("%d",&num);

	while(num!=0){
		rem = num%10;
		printf("%d ",rem);
		num =num/10;
	}
}
