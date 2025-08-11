/*

WAF to convert Fahrenheit to Celsius

celsius = (fahrenheit - 32) * 5/9

Declare fahrenheit as int and celsius as float.

int fahrenheit;
float celsius;

*/

#include<stdio.h>
float Celsius(int farh){
    float cel = (float)(farh-32)*5/9;
}
int main(){
    int farhenite;
    scanf("%d",&farhenite);

    printf("Celsius is %f",Celsius(farhenite));
}
