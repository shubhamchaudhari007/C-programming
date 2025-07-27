#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);

	for(int i=1;i<=num;i++){
		for(int j=i;j<=num;j++){
			if((j==i) || (i==1) || (j==num)){
				printf("%d ",j);
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
}
