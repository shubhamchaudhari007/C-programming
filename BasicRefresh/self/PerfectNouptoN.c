#include<stdio.h>
int main(){
	int num,sum=0;
	printf("enter range\n");
	scanf("%d",&num);

	for(int i=1;i<=num;i++){
		sum = 0;
		for(int j=1;j<i;j++){
			if(i%j==0){
				sum = sum + j;
			}
		}
		if(i == sum){
			printf("%d ",i);
		}
	}
}
