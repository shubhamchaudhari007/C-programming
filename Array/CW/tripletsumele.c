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
	int flag = 0;
	for(int i=0;i<num-1;i++){
		for(int j=i+1;j<num;j++){
			for(int k=j+1;k<num;k++){
				if(arr[i]+arr[j]+arr[k] == ele){
					printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
					flag++;
				}
			}
		}
	}
		if(flag==0)
		printf("No pair found");
}
