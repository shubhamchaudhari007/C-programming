#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);
	int num2 = num;
	int num1 = num*(num+1)/2;

	for(int i=1;i<=num;i++){
		for(int j=1;j<=i-1;j++){
				printf("   ");
			}
		
	
		for(int j=i;j<=num;j++){
				printf("%3d",num1);
				num1--;
			}
		
		printf("\n");
	}
}
