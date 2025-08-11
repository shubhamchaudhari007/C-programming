#include<stdio.h>
int main(){
	int n;
	printf("Enter size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements : \n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int ele;
	printf("Enter element :\n");
	scanf("%d",&ele);
	int count = 0;
	for(int i=0;i<n;i++){
		if(ele < arr[i])
			count++;
	}
	printf("%d elements are greater than %d",count,ele);


}
