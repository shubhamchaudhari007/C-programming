#include<stdio.h>
#include<limits.h>
int main(){
	int n;
	printf("Enter size :\n");
	scanf("%d",&n);

	int arr[n];
	printf("enter array elements :\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int max = arr[0];
	int smax = INT_MIN;
	for(int i=0;i<n;i++){
		if(max<arr[i]){
			smax = max;
			max = arr[i];
		}else if(smax<arr[i] && max!=arr[i]){
			smax = arr[i];
		}
	}
	printf("%d ",smax);
}
