#include<stdio.h>
int main(){
	int n,n1;
	printf("array1 size:\n");
	scanf("%d",&n);

	int arr[n];
	printf("Enter array1 elements\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("array2 size:\n");
	scanf("%d",&n1);
	int arr1[n1];
	printf("Enter array2 elements\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr1[i]);
	}

	int merge = n+n1;
	int mergearr[merge],k=0;
	for(int i=0;i<n;i++){
		mergearr[k] = arr[i];
		k++;
	}
	for(int i=0;i<n1;i++){
		mergearr[k] = arr1[i];
		k++;
	}
	printf("After merger of arrays:");
	for(int i=0;i<merge;i++){
		printf("%d ",mergearr[i]);
	}


}
