#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter sides of triangle to check right angle triangle or not\n");
	scanf("%d %d %d",&a,&b,&c);
	
	if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b)){
		printf("right angled triangle\n");
	}
	else{
		printf("not right angled triangle\n");
	}


}
