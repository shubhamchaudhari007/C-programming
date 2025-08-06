#include<stdio.h>
int main(){
	int num;
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	while(1){
		int sum = 0;
		while(num>0){
			int temp = num%10;
			sum = sum + temp;
			num = num/10;
		}
		if(sum < 10){
			printf("%d",sum);
			break;
		}else{
			num = sum;
		}
	}

}
