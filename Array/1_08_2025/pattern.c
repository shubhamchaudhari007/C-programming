#include<stdio.h>
int main(){
	int n,size;
	scanf("%d",&n);
	size = 2*n-1;

	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			int min = i<j?i:j;
			if(min > size-i-1)
				min = size-i-1;
			if(min > size-j-1)
				min = size-j-1;
			printf("%d ",n-min);
		}
		printf("\n");
	}
}
