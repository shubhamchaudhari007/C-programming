#include<stdio.h>
int main(){
	int x = 2, y=6;
	if(x==2 && y++)
	{
		if(y==7 || ++x){
			printf("x = %d, y= %d",x,y);
		}
	}
}
