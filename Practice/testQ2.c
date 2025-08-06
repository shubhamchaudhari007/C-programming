#include<stdio.h>
int main(){
	int i =10;
	goto label2;
	while(i)
	{
		switch(i-1)
		{
			case 1:
			label2:
				printf("%d",i);
		}
	}
}
