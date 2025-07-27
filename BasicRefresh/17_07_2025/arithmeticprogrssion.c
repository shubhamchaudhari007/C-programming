#include<stdio.h>
int main(){
	int start,diff,terms;
	printf("enter the start ,difference, and number if terms\n");
	scanf("%d %d %d",&start,&diff,&terms);
	int result=start;
	printf("%d ",result);
	for(int i=1;i<terms;i++){
		result = result + diff;
		printf("%d ",result);
	}
}
