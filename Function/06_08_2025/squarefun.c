#include<stdio.h>
int squarefun(int num){
	return num*num;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("square of %d is %d",n,squarefun(n));

}
