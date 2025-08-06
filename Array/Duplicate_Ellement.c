#include<stdio.h>
int main(){
	int size, count = 0;
	scanf("%d",&size);

	int arr[size];
	int uniq_array[size];

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
		uniq_array[count] = arr[0];
		count = 1;
	for(int i=1;i<size;i++){
		int flag = 0;
		for(int j=0;j<count;j++){

		if(arr[i] == uniq_array[j]){
			flag = 1;
			break;
		}
			
		
		}

		if(flag == 0){
			uniq_array[count] = arr[i];
			count++;
		}
	}
	for(int i=0;i<count;i++){
		printf("%d ",uniq_array[i]);
	}

}
