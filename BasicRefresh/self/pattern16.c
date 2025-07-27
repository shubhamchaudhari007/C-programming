#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);

	for(int i=1;i<=num;i++){
		for(int j=1;j<=num+1-i;j++){
			printf("%d ",j);
		}
		for(int k=i;k<=2*i-3;k++){
			printf("  ");
		}
		for(int l=i-1;l>=i;l--){
			printf("  ");
		}
		for(int j=num+1-i;j>=1;j--){
			printf("%d ",j);
		}

		printf("\n");
	}

}
