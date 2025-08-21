#include<stdio.h>
int main(){
	int n;
	printf("Enter size of arr :\n");
	scanf("%d",&n);

	int arr[n];
	printf("Enter array Elements : \n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	int m;
	printf("Enter size of subarray:\n");
	scanf("%d",&m);

	int arr1[m];
	printf("Enter array Elements : \n");
	for(int i=0;i<m;i++){
		scanf("%d",&arr1[i]);
	}

	/*

	this program only checks subset means all elements of subarray is present or not but we want to check continue subarray is present or not
*/
/*	int j,i;
	int flag = 0;
	for(i=0;i<m;i++){
		for(j=0;j<=n-m;j++){
			if(arr1[i] == arr[j]){
				i = i+1;
				flag++;
			}
		}
		
	}

	if(flag == m){
		printf("SubArray is present ");
	}else{
		printf("SubArray is not present ");
	}
*/
	
	int found = 0;
	for(int i=0;i<= n-m;i++){
		int flag = 1;
		for(int j=0;j<m;j++){
			if(arr[i+j] != arr1[j]){
				flag = 0;
				break;
			}
		}
		if(flag){
			found = 1;
			break;
		}
	}
	if(found)
		printf("Subarray is present");
	else
		printf("Subarray is not present");

}
