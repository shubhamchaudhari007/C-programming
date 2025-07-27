#include<stdio.h>
int main(){

	int num=55;
	int num1;
	char ch;
	int hinttracker = 0;
	do{

	printf("enter number to guess the number \n");
	scanf("%d",&num1);
	
	if(num1<20 || num1>80){
		printf("you are too far from number \n");
	}else if(num1<40 || num1>60){
		printf("you are close try hard!\n");
	}else if(num1==num){
		printf("congratulations you guess right number \n");
		break;
	}else{
		printf("try hard you entered not matched \n");
	}
	
	if(hinttracker == 1){
		printf("you taken hint so exit");
		break;
	}
	printf("you want a hint yes Y no N . \nif you take hint then only one chance in your hand\n");
	getchar();
	scanf("%c",&ch);
	getchar();
	if(ch=='Y'){
		hinttracker = 1;
		printf("12 , 55 , 96 , 36 \n");
	}
}
	while(num1!=num);
}	


