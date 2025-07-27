#include<stdio.h>
int main(){
	int num,num2=0,num3=0,rem,result=0;
	scanf("%d",&num);
	int count,count1=0;
	
	for(int i=2;;i++){
		count =0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				count++;
			}
		}
		if(count == 2){
			num2=i;
			count1++;
			if(count1 == num){
				num2=i;
				break;
		}
	}
	}
	//printf("%d",num2);
	num3=num2;
do{
		result = 0;
	while(num2!=0){
		rem=num2%10;
		result = result+rem;
		num2 = num2/10;
}	
	if(result>9){
		num2 = result;
	}
}while(result>9);
		printf("%d",num3*result);
	

}

