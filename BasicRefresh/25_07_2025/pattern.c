#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);

	for(int i=1;i<=num;i++){
		for(int j=i;j<=num;j++){
			printf("  ");
		}
		for(int k=1;k<=i;k++){
			printf("%d ",k);
		}
		for(int a=i-1;a>=1;a--){
			printf("%d ",a);
		}

		printf("\n");
	}
}
