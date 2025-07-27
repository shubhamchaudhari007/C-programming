#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);
	int num2 = num;
	for(int i=1;i<=2*num-1;i++){
		for(int j=1;j<=2*num-1;j++){
			if(i==1 && j==1) {
				printf("%d",num2);
				num2--;
			}else if(i==2*num-1 || j==2*i-1){
				printf("%d",num2);
				num2--;
			}
		}
		printf("\n");
	}
}
