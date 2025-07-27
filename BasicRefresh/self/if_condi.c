#include<stdio.h>
int main(){
	int amount , note ;
	int count = 0;

	printf("enter amount to calculate note");
	scanf("%d",&amount);

	if(amount>=500){
		note = amount / 500;
		printf("500 X %d\n",note);
		count = count + note;
		amount =amount % 500;
	}
	if(amount>=200){
		note = amount / 200;
		printf("200 X %d\n",note);
		count = count + note;
		amount =amount % 200;
	}

	if(amount>=100){
		note = amount / 100;
		printf("100 X %d\n",note);
		count = count + note;
		amount =amount % 100;
	}
	if(amount>=50){
		note = amount / 50;
		printf("50 X %d\n",note);
		count = count + note;
		amount =amount % 50;
	}
	if(amount>=20){
		note = amount / 20;
		printf("20 X %d\n",note);
		count = count + note;
		amount =amount % 20;
	}
	if(amount>=10){
		note = amount / 10;
		printf("10 X %d\n",note);
		count = count + note;
		amount =amount % 10;
	}
	if(amount<10){
		
		printf("remaining amount :  %d\n",amount);
	}
	
	printf("total no of note required %d\n",count);
	return 0;
}


