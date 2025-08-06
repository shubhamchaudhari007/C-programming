#include<stdio.h>
int main(){
	int num,sum=0,rem;
	printf("Enter a range\n");
	scanf("%d",&num);

	for(int i=1;i<=num;i++){
		int pali = i;
		sum = 0;
		while(pali!=0){
			rem = pali%10;
			sum = sum*10+rem;
			pali/=10;
		}
		if(i==sum){
			printf("%d ",i);
		}
	}


}
