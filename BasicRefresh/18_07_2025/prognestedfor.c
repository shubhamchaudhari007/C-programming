#include<stdio.h>
int main(){
	int rows;
	printf("enter row size");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=5;j++){
			printf("* ");
		}
		printf("\n");
	}
}
