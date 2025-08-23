#include<stdio.h>
int main(){
	int size;
	scanf("%d",&size);
	int arr[size];

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	for(int i=0;i<size;i++){
		int flag = 0;
		if(arr[i] == 1){
			continue;
		}
		for(int j=2;j<=arr[i]/2;j++){
			if(arr[i]%j==0){
				flag = 1;
				break;
			}
		}
		if(flag == 0){

			printf("%d ",arr[i]);
		}
	}

}
