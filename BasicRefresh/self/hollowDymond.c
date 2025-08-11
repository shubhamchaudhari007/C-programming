#include<stdio.h>
int main(){
	int num,k,m;
	scanf("%d",&num);

	for(int i=1;i<=num;i++){
		k = i;
		m = num;
		for(int j=1;j<=num-i+1;j++){
			
			printf("%d ",k++);
		}
		for(int k=1;k<=2*i-1;k++){
			printf("  ");
		}
		for(int l=1;l<=num-i+1;l++){
			printf("%d ",m--);
		}
		printf("\n");
	}
}
