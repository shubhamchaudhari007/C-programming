#include<stdio.h>
void add1(){
	printf("hello\n");
}

int add2(int a,int b){
	printf("hello1\n");
	return a+b;
}

int main(){

	int a = 10;
	int b = 20;

	add2(a,b);
	add1();
	//printf("%d \n",c);
	printf("%d ",add2(a,b));

}
