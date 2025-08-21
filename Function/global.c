#include<stdio.h>
int a;
int b;
void swap(){
	int temp = a;
	a= b;
	b = temp;
}

int main(){
	a = 10,b = 20;
	printf("%d %d",a,b);
	swap();
	printf("\n%d %d",a,b);

}
