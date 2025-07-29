#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==1){
				printf("%d",1);
			}else if(j==1&&i!=1){
				printf("%d",2);
			}else if(i==n && j!=1){
				printf("%d",3);
			}else if(j==n && i!=n && i!=1){
				printf("%d",4);
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
