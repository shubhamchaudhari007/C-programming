/*

Description:

Suppose, in a week let us assume first day is 'Sunday', then second day will be 'Monday' and so on. If first day is 'Monday' then the second day will be 'Tuesday' and so on.
Pr-requisites:-

Arithmetic operators
Switch Case
Objective: -

To understand the concept of Switch Case
Inputs: -
      Positive integer say 'N'. Where 1 <= 'N' <= 365.
      1 <= Starting day <= 7
      Option to set the first day.

Example :

       Where start_day = Wednesday
       Nth day = 5
       5th day of the year is Monday

Sample execution: -
Test Case 1:
user@emertxe] ./day_of_the_year
Enter the value of 'n' : 9
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 2
The day is Tuesday
Test Case 2:
Enter the value of 'n' : 9
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 3
The day is Wednesday
Test Case 3: 
Enter the value of 'n' : 9

Choose First Day :

1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday

Enter the option to set the first day : 8
Error: Invalid input, first day should be > 0 and <= 7
Test Case 4:

Enter the value of 'n' : 0
Error: Invalid Input, n value should be > 0 and <= 365
Test Case 5:
Enter the value of 'n' : 366
Error: Invalid Input, n value should be > 0 and <= 365

*/

/* Name : Shubham Chaudhari
   Date : 18/07/2025
   Description : Enter value of n and first day to show which day is on the nth number.
   I/O : n = 199
         first_day = 1
         The day is Tuesday
   */

#include<stdio.h>
int main(){
    int n,first_day,num;
   // printf("Enter the value of 'n' : ");
    scanf("%d",&n);

    if(n>0&&n<=365){
       // printf("Choose first day : \n1.Sunday\n2.Monday\n3.tuesday\n4.wednesday\n5.thursday\n6.friday\n7.saturday\n");
        //printf("Enter the option to set the first day : ");
        scanf("%d",&first_day);

        if(first_day>0&&first_day<=7){
            num = ((n+first_day)-1)%7;   //calculate the day present at nth number

            switch(num){
                case 1:
                    printf("The day is Sunday");
                    break;
                case 2:
                    printf("The day is Monday");
                    break;
                case 3:
                    printf("The day is Tuesday");
                    break;
                case 4:
                    printf("The day is Wednesday");
                    break;
                case 5:
                    printf("The day is Thursday");
                    break;
                case 6:
                    printf("The day is Friday");
                    break;
                case 0:
                    printf("The day is Saturday");
                    break;

            }

        }else{
            printf("Error: Invalid input, first day should be > 0 and <= 7");
        }
    }else{
        printf("Error: Invalid input, n value should be > 0 and <= 365 ");
    }
}
