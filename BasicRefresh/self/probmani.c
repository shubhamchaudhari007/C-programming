#include<stdio.h>
int main(){
	int num2,num,rem,rem2,result=0,result2=0;
	scanf("%d",&num);

	while(num!=0){
		rem = num%10;
		if(rem == 0){
			rem = !rem;
		}
		result = result*10+rem;
		num = num/10;
	}
	num2 = result;
	
	while(num2!=0){
		rem2= num2%10;
		result2 = result2*10+rem2;
		num2 /= 10;
	}

	printf("result = %d",result2);

}
