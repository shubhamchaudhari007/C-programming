/*
Problem Statement:
WAP to Print direction based on input char (N/S/E/W/n/s/e/w)

Sample Execution 1:

Enter direction: N
North
Sample Execution 2:

Enter direction: W
West
Sample Execution 3:
Enter direction: X
Invalid input
*/

#include<stdio.h>
int main(){
    char ch;
    printf("Enter direction: ");
    scanf("%c",&ch);

    if(ch=='N'||ch=='S'||ch=='W'||ch=='E'){
        ch=ch+32;
    }

    switch(ch){
        case 'n':
            printf("North");
            break;
        case 's':
            printf("South");
            break;
        case 'w':
            printf("West");
            break;
        case 'e':
            printf("East");
            break;
        default:
            printf("Invalid input");
            break;
    }
}
