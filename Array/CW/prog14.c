#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		if(i%2==0){
			arr[i] = arr[i]+10;
		}else{
			arr[i] = arr[i]+arr[i];
		}
	}
	
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
