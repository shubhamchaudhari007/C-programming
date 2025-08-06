#include<stdio.h>
int main(){
	int num,a=2,flag = 0;
	scanf("%d",&num);
	num = num+1;
	while(1){
		flag = 0;
	for(int j=2;j<=num/2;j++){
		if(num % j==0){
			flag++;
			break;
			}
		
	}
	if(flag!=1){

		printf("%d",num);
		break;
	}
		num++;
	}
}
