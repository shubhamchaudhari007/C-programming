/*

WAP to Print Simple Triangle Digits Pattern

Comment the prompting messages printf statements.

Ex: //printf("Enter the number:\n");

Program execution sample:

Sample Output 1:
Enter max lines: 4

1
2 3
4 5 6
7 8 9 10

Enter max lines: 6

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21

*/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int num=1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
}
