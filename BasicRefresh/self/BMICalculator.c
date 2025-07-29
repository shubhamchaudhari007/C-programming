#include<stdio.h>
int main(){
	int choice;
	float Weight,Height;
	float BMI;
	printf(" ---------------------------------- \n");
	printf("          BMI CALCULATOR            \n");
	printf(" ---------------------------------- \n");
	
	printf("Choose option to enter your data\n");
	printf(" 1.Weight in KG and Height in M\n");
	printf(" 2.Weight in KG and Height in CM\n");
	scanf("%d",&choice);
	
	printf("Enter Weight in KG\n");
	scanf("%f",&Weight);

	printf("Enter Height in CM/M\n");
	scanf("%f",&Height);

	switch(choice){
		case 1 :
			BMI = Weight /(Height * Height);
			if(BMI >= 30){
				printf("YOUR BMI RATIO IS %f AND YOU ARE Obese \n",BMI);
			}else if(BMI>=25 && BMI<=29.9){
				printf("YOUR BMI RATIO IS %f AND YOU ARE Overweight \n",BMI);
			}else if(BMI>=18.5 && BMI<=24.9){
				printf("YOUR BMI RATIO IS %f AND YOU ARE Normal \n",BMI);
			}else {
				printf("YOUR BMI RATIO IS %f AND YOU ARE Underweight \n",BMI);
			}
			break;
		case 2 :
			BMI = Weight /((Height/100)*(Height/100));
			if(BMI >= 30){
				printf("YOUR BMI RATIO IS %f AND YOU ARE Obese \n",BMI);
			}else if(BMI>=25 && BMI<=29.9){
				printf("YOUR BMI RATIO IS %f AND YOU ARE Overweight \n",BMI);
			}else if(BMI>=18.5 && BMI<=24.9){
				printf("YOUR BMI RATIO IS %f AND YOU ARE Normal \n",BMI);
			}else {
				printf("YOUR BMI RATIO IS %f AND YOU ARE Underweight \n",BMI);
			}
			break;
	}
	
}
