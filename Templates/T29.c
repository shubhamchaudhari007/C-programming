
/*
WAP to Generate prime numbers upto a given limit

Description:-
Generate prime number upto given limit. 

Solution:-
For each number form 2 to limit, check it is prime.
If it is prime print the number. If it is not prime do not print anything.

Sample Execution:
Case 1:
Enter a limit: 30
2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
*/

#include<stdio.h>
int main(){

    int count=0;
    int num;
    printf("Enter a limit : ");
    scanf("%d",&num);
    for(int i=2;i<=num;i++){
        count = 0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                count++;
            }
        }

        if(count < 1){
            printf("%d ",i);
        }
    }

}
