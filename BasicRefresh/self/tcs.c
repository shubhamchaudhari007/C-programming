#include<stdio.h>
int main(){
	int m,n,num1,count=0;
	scanf("%d %d",&m,&n);
	int num = 1;
	for(int i=2;i<=num/2;i++){
		if(num%i==0){
			num++;
		}else{
			count++;
			num++;
		}
		if(count == m){
			num1=num;
		}
	}
	printf("%d",num1);


}
