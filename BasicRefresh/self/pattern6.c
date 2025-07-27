#include<stdio.h>
int main(){
	int row;
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		for(int j=1;j<=row-i;j++){
			printf("  ");
		}
		for(int k=1;k<=2*i-1;k++){
			if(k==1 || i==row || k==2*i-1){
			printf("* ");
			}else{

				printf("  ");
				
			
			}
		}
		printf("\n");
	}
}
