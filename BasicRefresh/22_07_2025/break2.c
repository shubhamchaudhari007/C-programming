#include<stdio.h>
int main(){
	int flag;
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if(i==3 && j==4){
				printf("found book\n");
				flag=1;
				break;
			}
		}
		if(flag==1){
			break;
		}
	}
}
