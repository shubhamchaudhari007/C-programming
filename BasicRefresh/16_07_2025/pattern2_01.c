#include<stdio.h>
int main(){
	int rows;
	printf("enter no of rows");
	scanf("%d",&rows);
	int num;
	for(int i=1;i<=rows;i++){
			num = 1;
		for(int j=1;j<=rows;j++){
			if(i+j<=rows)
				printf(" ");
			else{
				printf("%d",num);
				num++;
		}
		}
		printf("\n");
	}
}
