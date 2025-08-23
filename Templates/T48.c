/*

WAP to increase the value of the float variable by 20 using pointer

Eg:

Enter the age : 20.6

Age after increasing by 20 is 40.6  

*/

#include<stdio.h>

float updateval(float *n){
    float ret = *n+20;
    return ret;
}

int main(){
    float var;
    printf("Enter number : ");
    scanf("%f",&var);
    
    float update = updateval(&var);
    printf("Age after increasing by 20 is %g",update);
}