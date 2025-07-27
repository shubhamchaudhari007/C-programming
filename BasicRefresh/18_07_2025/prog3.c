#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);
	int mid;
	for(int i=1;i<=num;i++){
		for(int j=1;j<=num;j++){
			mid = num/2+1;
			if(i==1||j==mid){
				printf("* ");
			}
			else{
				printf("  ");
			}
			
		}
		printf("\n");
	}
}
