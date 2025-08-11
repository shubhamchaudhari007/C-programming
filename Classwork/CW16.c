/*

Description : 

You have to write a function to convert temperature given in degree Fahrenheit to degree Celsius

- C = 5/9 * (F - 32)

Sample Execution : 

Test case 1 : 

Enter the Fahrenheit : 33.5

Degree Celsius 0.8333333

Test case 2 :


Enter the Fahrenheit : 40.2

Degree Celsius 4.555556

*/

#include<stdio.h>
float celsius(float f){
    float c ;
    c = (float)5/9*(f-32);
    return c;

}

int main(){
    float far;
    printf("Enter the Farhenite : ");
    scanf("%f",&far);

    printf("Degree Celsius %f",celsius(far));
}
