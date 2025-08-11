#include<stdio.h>
int fact(int x){
	int fact = 1;
	for(int i=2;i<=x;i++){
		fact = fact*i;
	}
	return fact;
}

int combination(int n,int r){
	int npr = fact(n)/fact(n-r);
	return npr;
}
int main(){
	int n;
	printf("Enter value of N : \n");
	scanf("%d",&n);
	int r;
	printf("Enter value of R : \n");
	scanf("%d",&r);

	int npr = combination(n,r);
	printf("%d ",npr);

}
