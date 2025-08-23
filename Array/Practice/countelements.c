#include<stdio.h>
int main(){
	int n,count;
	printf("Entre array size\n ");
	scanf("%d",&n);

	int arr[n];
	printf("Enter array elements\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		count = 0;
		for(int j=0;j<n;j++){

			if(j<i){
				if(arr[i] == arr[j]){
					break;
				}
			}else{
				if(arr[i] == arr[j]){
					count++;
				}
			}
		}
		if(count > 0)
		printf("%d --> %d\n",arr[i],count);
	}

}
