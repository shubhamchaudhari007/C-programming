#include<stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    int check = 0;
    check = (year%4==0&&(year%100!=0||year%400==0))?1:0;    
    if(check){
        printf("%d is a leap year.\n",year);
    }else{
        printf("%d is not a leap year.\n",year);
    }
    
}