#include<stdio.h>
int main(){
	int num;
	printf("Enter size of array\n");
	scanf("%d",&num);
	int arr[num];
	printf("Enter array elements:\n");
	for(int i=0;i<num;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter element to delete\n");
	int del;
	scanf("%d",&del);
	int new = 0;
	int newarr[new];
	for(int i=0;i<num;i++){
		if(arr[i]!=del){
			newarr[new] = arr[i];
			new++;
		}
	}
	printf("new arr :");
	for(int i=0;i<new;i++){
		printf("%d ",newarr[i]);
	}
}
