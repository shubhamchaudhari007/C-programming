#include<stdio.h>
int main(){
	int ch;
	int a,b;
	printf("enter character \n");
	printf("1.addition 2.substraction 3.multiplication 4. division \n");
	scanf("%d",&ch);
	
	
	printf("enter two numbers\n");
	scanf("%d %d",&a,&b);
	switch(ch){
		case 1:
	
			printf("%d is answer\n",a+b);
			break;

		case 2:
			printf("%d is answer\n",a-b);
			break;

		case 3:
	
			printf("%d is answer\n",a*b);
			break;

		case 4:
				printf("%d is answer\n",a/b);
			break;

		default:
			printf("invalid input\n");
			break;
	}

}
