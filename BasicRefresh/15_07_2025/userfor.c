#include<stdio.h>
int main(){
	int b;
	printf("enter range ");
	scanf("%d",&b);

	for(int i=1;i<=b*2;i++){

		if(i%2==0){
		printf("%d ",i);
		}
	}


	int n,j=2;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("%d",j);
		j = j+2;

	}

}
