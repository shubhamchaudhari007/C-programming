#include<stdio.h>
int main(){
	int n;
	printf("Enter size:\n");
	scanf("%d",&n);

	int arr[n];
	printf("enter array elements\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	for(int i=0;i<n;i++){
		int flag = 0;
		for(int j=0;j<n;j++){
			if(arr[i]==arr[j] && i!=j){
				flag = 1;
				
			}		
		}
		if(flag == 0){
			printf("%d ",arr[i]);
			break;
		}
	}
}
