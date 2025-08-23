#include<stdio.h>
int main(){
	int n;
	printf("enter size of array\n");
	scanf("%d",&n);

	int arr[n];
	printf("Enter elements of an array:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int sum = 0;
	for(int i=0;i<n;i++){
		if(i%2==0){
			sum = sum + arr[i];
		}
	}
	printf("sum = %d",sum);
}
