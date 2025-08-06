#include<stdio.h>
int main(){
	int n;
	printf("Enter size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	for(int i=0;i<n;i++){
		arr[i] = arr[i]*arr[i];
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
