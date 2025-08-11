/*
1  10  11  20  21
2  9   12  19  22
3  8   13  18  23
4  7   14  17  24
5  6   15  16  25

*/

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	
	int c1=1,c2=2*n-1;
	for(int i=1;i<=n;i++){
			int x = i-1;	
		for(int j=1;j<=n;j++){
			if(j%2==0){
				x = x+c2;
				printf("%d ",x);
			}else if(j==1){
				x = x+1;
				printf("%d ",x);
			}else{
				x = x+c1;
				printf("%d ",x);
			}
		}
		printf("\n");
		c2 -=2;
		c1 +=2;
	}

			
}
