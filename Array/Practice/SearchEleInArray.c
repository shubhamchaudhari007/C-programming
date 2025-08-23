#include<stdio.h>
int main(){
	int n, element , flag = 0;
	printf("Enter size of an array\n");
	scanf("%d",&n);

	int arr[n];
	printf("Enter array elements :\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter element to found \n");
	scanf("%d",&element);

	for(int i=0;i<n;i++){
		if(element == arr[i]){
			flag++;
		}
	}
	if(flag >= 1){
		printf("Element found %d times",flag);
	}else{
		printf("Element not found");
	}
}
