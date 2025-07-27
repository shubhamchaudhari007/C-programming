#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);
	int n = num-1;
	int nsp = 1;
	int nst = num-1;
	for(int i=1;i<=num;i++){
		printf("%d ",i);
	}
	for(int i=num-1;i>=1;i--){
		printf("%d ",i);
	}
	printf("\n");

	for(int i=1;i<=num;i++){
		for(int j=1;j<=nst;j++){
			printf("%d ",j);
		}
		for(int k=1;k<=nsp;k++){
			printf("  ");
		}
		 
		for(int l=nst;l>=1;l--){
			printf("%d ",l);
		}
		
		nsp+=2;
		nst--;
	printf("\n");
	}
		
}
