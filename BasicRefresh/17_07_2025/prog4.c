#include<stdio.h>
int main(){
	int num,k;
	printf("enter number to print table and ending\n");
	scanf("%d %d",&num,&k);

	for(int i=1;i<=k;i++){
		printf("%d ",num*i);
	}
}
