#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);
	int num2 = num;
	//int num1 = num*(num+1)/2;
	int num1= 0;
	while(num2!=0){
		num1 = num1+num2;
		num2--;
	}
	for(int i=1;i<=num;i++){
		for(int j=1;j<=i;j++){
				printf("  ");
			}
		
	
		for(int j=i;j<=num;j++){
				printf("3%d ",num1);
				num1--;
			}
		
		printf("\n");
	}
}
