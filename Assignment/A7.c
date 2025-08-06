/*

Description:

 

Read a number from user. Let's say if number is 5, you need to print numbers in pyramid pattern as shown below:
If n = 5, then,
5
4 5
3 4 5
2 3 4 5
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5
Note:- Please consider '_' as space. You need to leave space between 2 numbers

Pre-requisites:

Loops
Inputs:

Read an Integer 'n' from the user
Sample Output:
Test Case 1:
Enter the number: 4
4
3 4
2 3 4
1 2 3 4
2 3 4
3 4
4
Test Case 2:
Enter the number: 5
5
4 5
3 4 5
2 3 4 5
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5

*/
/*

Name : Shubham Sanjay Chaudhari
Date : 28/07/2025
Description : Program to print the desired pattern.
    for iput = 5

                5
                45
                345
                2345
                12345
                2345
                345
                45
                5
I/O : Input : 3
      OUTPUT :
                3
                23
                123
                23
                3
*/

#include<stdio.h>
int main(){
    int num;
    //printf("Enter the number : ");
    scanf("%d",&num);

    for(int i=num;i>=1;i--){        //outer loop to print upper triangle
        for(int j=i;j<=num;j++){    //inner loop to print upper triangle
            printf("%d ",j);         //to print the values of pattern
        }
        printf("\n");               //go to next line after printing one line
    }

    for(int i=2;i<=num;i++){        //outer loop to print lower triangle
        for(int j=i;j<=num;j++){    //inner loop to print lower triangle
            printf("%d ",j);         //to print the values of pattern

        }
        printf("\n");               //go to next line after printing one line
    }
}
