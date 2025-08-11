#include<stdio.h>
#include<limits.h>

int minele(int a,int b){
	if(a<b)
		return a;
	else
		return b;
}
int main(){
	int n;
	printf("Enter size of Array");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements :");

	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int count = 0;
	int leftmax[n];
	leftmax[0] = arr[0];
	count = 1;
	for(int i=0;i<n-1;i++){
		if(leftmax[i] < arr[i+1]){
			leftmax[count] = arr[i+1];
			count++;
		}else{
			leftmax[count] = leftmax[count-1];
			count++;
		}
	}
//	for(int i=0;i<n;i++){
//		printf("%d ",leftmax[i]);
//	}
	int count1 = 0;
	int rightmax[n];
	rightmax[0] = arr[n-1];
	count1 = 1;
	for(int i=1;i<n;i++){
		if(rightmax[i-1] < arr[n-i-1]){
			rightmax[count1] = arr[n-i-1];
			count1++;
		}else{
			rightmax[count1] = rightmax[count1-1];
			count1++;
		}
	}

	for(int i=0;i<n/2;i++){
		int temp = rightmax[i];
		rightmax[i] = rightmax[n-i-1];
		rightmax[n-i-1] = temp;
	}

//	for(int i=0;i<n;i++){
//		printf("%d ",rightmax[i]);
//	}
	int water = 0;
	for(int i=0;i<n;i++){
		water = water + (minele(leftmax[i],rightmax[i])-arr[i]);
	}

	printf("\nWater = %d\n",water);

}
