#include<stdio.h>
int main(){
	int row;
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			if(j==1 || j==row || j==i){
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
}
