/*

WAF to find the average of 3 integers and the print the result in main function.

Eg1:

Enter 3 numbers: 10 20 30

Average is 20

Eg2:

Enter 3 numbers: 15 27 46

Average is 29.333334

*/

#include<stdio.h>
float Avg(int a,int b,int c){
    float avg = (float)(a+b+c)/3;
    return avg;
}
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    printf("Average is %g",Avg(a,b,c));

}
