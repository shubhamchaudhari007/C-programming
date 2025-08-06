#include<stdio.h>
int main(){
	int a[5] = {5,1,15,20,25};
	int i,j,m;
	i=++a[1];
	printf("%d\n",i);
	j=a[1]++;
	printf("%d\n",j);
	m = a[i++];
	printf("%d\n",i);
	printf("%d %d %d",i,j,m);

}
