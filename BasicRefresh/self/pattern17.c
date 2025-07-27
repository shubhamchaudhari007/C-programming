#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);
	int nst = num-1;
	int nsp = 1;
	for(int i=1;i<=2*num-1;i++){
		printf("* ");
	}
	printf("\n");
	for(int i=1;i<=num-1;i++){
		for(int j=1;j<=nst;j++){
			printf("* ");
		}
		for(int k=1;k<=nsp;k++){
			printf("  ");
		}
		for(int l=1;l<=nst;l++){
			printf("* ");
		}
		nsp+=2;
		nst--;
		printf("\n");
	}
}
