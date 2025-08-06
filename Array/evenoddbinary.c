#include<stdio.h>
int main(){
	int n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			arr[i] = 1;
		}else{
			arr[i] = 0;
		}
	}
	int sum = 0,mul = 1;
	for(int i=n-1;i>=0;i--){
		sum = sum + arr[i]*mul;
		mul = mul*2;
	}
	printf("%d",sum);

}
