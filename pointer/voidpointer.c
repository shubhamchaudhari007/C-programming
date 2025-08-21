#include<stdio.h>
int main(){
	int i = 2;

	void* p = &i;

	printf("%d ",*char *p);
}
