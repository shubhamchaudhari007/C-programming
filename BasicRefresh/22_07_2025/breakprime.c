#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);
	int count = 0;
	for(int i=2;i<num/2;i++){
		if(num%i==0){
			count++;
			break;
		}
	}
	if(count == 0){
		printf("prime number");
	}else
		printf("not a prime");

}
