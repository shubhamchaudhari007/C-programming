#include<stdio.h>
int main(){
	int row;
	printf("enter no of rows");
	scanf("%d",&row);
	int n,m;

	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			if(i==1||i==row || i==n){
				printf("* ");
			}else if(j==1 || j==row || j==m){
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}

}
