#include<stdio.h>

void reversearr(int arr[],int n,int m){
	for(int i=n,j=m;i<j;i++,j--){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}

int main(){
	int n,k;
	printf("Enter size:  \n");
	scanf("%d",&n);

	int arr[n];
	printf("Enter array ele :\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	printf("Enter value k : \n");
	scanf("%d",&k);

	k = k%n;

	reversearr(arr,0,n-1);
	reversearr(arr,0,k-1);
	reversearr(arr,k,n-1);

	
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}


}
