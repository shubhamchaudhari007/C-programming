#include<stdio.h>
int main(){
	int n = 5;
	int arr[] = {1,2,3,4,5};

//	for(int i=0;i<n;i++){
		//printf("%p",arr++);
//	}

	int * ptr = &n;
	printf("%p",ptr++);
	

}
