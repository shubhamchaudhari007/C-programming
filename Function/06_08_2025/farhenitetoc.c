#include<stdio.h>
float celsius(float farh){
	return (float)5/9*(farh-32);
}
int main(){
	float farhenite;
	printf("Enter value of farhenite:\n");
	scanf("%f",&farhenite);

	printf("Celsius value will be %f",celsius(farhenite));

}
