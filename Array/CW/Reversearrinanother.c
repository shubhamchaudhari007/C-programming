#include<stdio.h>
int main(){
	int n;
	printf("Enter size :\n");
	scanf("%d",&n);

	int arr[n];
	int arr2[n];
	printf("Enter array elements:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	for(int i=0;i<n;i++){
		arr2[i] = arr[n-i-1];
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr2[i]);
	}

}
