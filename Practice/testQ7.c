#include<stdio.h>
int main(){
	int array[5],i=0;
	while(i++ < 5){
		array[i] = i;
	}
	for(i=0;i<5;i++){
		printf("%d",array[i]);
	}
	printf("\n");

}
