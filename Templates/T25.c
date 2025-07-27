/*
WAP to Print Simple Triangle Digits Pattern

Comment the prompting messages printf statements.

Ex: //printf("Enter the number:\n");



Program execution sample:

Sample Output 1:
Enter max lines: 4

1
12
123
1234

Enter max lines: 5

1
12
123
1234
12345
*/

#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}
