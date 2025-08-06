#include<stdio.h>
int main(){
	int size, count = 0;
	scanf("%d",&size);

	int arr[size];
	int arr1[size];

	printf("Enter array elements : ");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i] == arr[j]){
				arr[j] = 0;
			}
		}
	}
	for(int i=0;i<size;i++){
		if(arr[i]!=0){
			arr1[count] = arr[i];
			count++;
		}
	}
	for(int i=0;i<count;i++){
		printf("%d ",arr1[i]);
	}
	
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}

}
