#include<stdio.h>
int fact(int x){
	int fact = 1;
	for(int i=2;i<=x;i++){
		fact = fact*i;
	}
	return fact;
}

int combination(int n,int r){
	int ncr = fact(n)/(fact(r)*fact(n-r));
	return ncr;
}
int main(){
	int n;
	printf("Enter value of N : \n");
	scanf("%d",&n);
	int r;
	printf("Enter value of R : \n");
	scanf("%d",&r);

	int ncr = combination(n,r);
	printf("%d ",ncr);

}
