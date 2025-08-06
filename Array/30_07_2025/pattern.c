#include<stdio.h>
int main(){
	int num,mid;
	scanf("%d",&num);
	if(num%2==0){
		mid = num/2;
	}else{
		mid = num/2+1;
	}

	for(int i=1;i<=num;i++){
		for(int j=1;j<=num;j++){
			if(i==mid || j==mid ||(i==1 && j<mid) || (i==num && j>mid) || (j==1 && i>mid) || (j==num && i<mid)){
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
}
