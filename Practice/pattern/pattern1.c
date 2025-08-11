/* 
1  2  3  4  5
10 9  8  7  6
11 12 13 14 15
20 19 18 17 16
21 22 23 24 25
*/

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int x,y,z;
	for(int i=1;i<=n;i++){
			y = (n*i)-(n-1);
			z = n*i;
			x = 1;
		for(int j=1;j<=n;j++){
			
			if(i==1){
				printf("%d ",x);
				x++;
			}else if(i%2==0){
				printf("%d ",z);
				z--;
			}else{
				printf("%d ",y);
				y++;
			}
		}
		printf("\n");
	}

}
