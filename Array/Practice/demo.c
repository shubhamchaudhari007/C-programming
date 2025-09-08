/*
take 5 inputs from user and store only min and max value
*/

#include<stdio.h>
int main(){
    int ele,max,min;
    printf("Enter elements : ");
    scanf("%d",&ele);
    min = ele;
    max = ele;

    for(int i=1;i<5;i++){
        scanf("%d",&ele);
        if(max < ele){
            max = ele;
        }else if(min > ele){
            min = ele;
        }
    }
    printf("min ele = %d\n",min);
    printf("max ele = %d",max);
}