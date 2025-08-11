/*
1
2  6
3  7  10
4  8  11  13
5  9  12  14  15

*/


#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int x,y;

	for(int i=1;i<=n;i++){
		x = i;
		y = n-1;
		for(int j=1;j<=i;j++){
			printf("%d ",x);
			x = x+y;
			y--;
		}
		printf("\n");
	}
}
