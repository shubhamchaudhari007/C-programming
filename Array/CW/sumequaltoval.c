#include<stdio.h>
int main(){
	int num,ele;
	printf("enter array size:\n");
	scanf("%d",&num);

	int arr[num];
	printf("Enter array elements : \n");
	for(int i=0;i<num;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter value to find sum \n");
	scanf("%d",&ele);
	int flag = 1;
	for(int i=0;i<num-1;i++){
		for(int j=i+1;j<num;j++){
			if(arr[i]+arr[j] == ele){
				printf("(%d,%d)",arr[i],arr[j]);
				flag++;
			}
		}
	}
		if(flag)
		printf("No pair found");
}
