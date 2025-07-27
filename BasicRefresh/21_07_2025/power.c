#include<stdio.h>
int main(){
	double num,power;
	printf("enter number and power: \n");
	scanf("%lf %lf",&num,&power);
	double result = num;
	for(int i=1;i<=power;i++){
		result = result*num;
	}
	printf("%g",result);


}
