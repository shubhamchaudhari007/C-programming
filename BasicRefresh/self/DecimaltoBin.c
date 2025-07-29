#include<stdio.h>
int main(){
	int num,rem,i=0;
	scanf("%d",&num);
	int arr[10];

	while(num!=0){
		rem = num%2;
		arr[i]= rem;
		i++;
		num = num/2;
	}

	for(int j = i-1;j>=0;j--){
		printf("%d",arr[j]);
	}

}
