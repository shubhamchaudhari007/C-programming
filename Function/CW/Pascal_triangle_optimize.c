#include<stdio.h>
int main(){
	int n;
	printf("Enter the value of n: \n");
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		for(int k=0;k<n-i-1;k++){
			printf("  ");
		}
		int first = 1;
		for(int j=0;j<=i;j++){
			printf("%d   ",first);
			first = first * (i-j)/(j+1);
		}
		printf("\n");
	}
}
