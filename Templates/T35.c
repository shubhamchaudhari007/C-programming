/*

WAP to Find sum and average of array elements


Comment the prompting messages printf statements.

Ex: //printf("Enter the number:\n");


Instructions to be followed in sequence :-

Prompt the user to enter size
Create an integer array named arr of user defined size
Prompt the user to enter elements
Read the individual elements using scanf and store it in the array (using loop)
Find the sum of all elements using loop
Find average of array elements, and store in float variable
Print sum and average
Sample output:

Enter the size: 5

Enter the array elements: 10 20 30 40 50

Sum: 150

Average: 30

*/

#include<stdio.h>
int main(){
    int num,sum=0;
    float avg;
    //printf("Enter the size : ");
    scanf("%d",&num);
    int arr[num];

    //printf("Enter the array elements : ");
    for(int i=0;i<num;i++){

        scanf("%d",&arr[i]);
    }

    for(int i=0;i<num;i++){
        sum = sum+arr[i];
    }
    printf("sum : %d\n",sum);
    avg = (float)sum/num;
    printf("Average: %f",avg);
}
