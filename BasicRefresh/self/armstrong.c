#include<stdio.h>
int main(){
	int num,rem=1,result=0,count = 0;
	scanf("%d",&num);
	int num2 = num;
	while(num2!=0){
		count++;
		num2/=10;
	}
	num2 = num;
	while(num!=0){
		rem = num%10;
		int rem1 = 1;
		for(int i=1;i<=count;i++){
			rem1 = rem*rem1;
		}
		result = result + rem1;
		num = num/10;
	}
	if(num2==result){

		printf("Armstrong number");
	}else{
		printf("not an armstrong number");
	}
}
