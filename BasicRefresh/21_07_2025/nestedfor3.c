#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);
	char num1='A';
	for(int i=1;i<=num;i++){
		for(int j=1;j<=num;j++){
			printf("%c ",num1);
			num1++;
		}
		printf("\n");
	}
}
