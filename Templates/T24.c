/*

WAP to Print Simple Triangle Star Pattern

Comment the prompting messages printf statements.

Ex: //printf("Enter the number:\n");



Program execution sample:

Sample Output 1:
Enter max lines: 4

*
**
***
****

*/

#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
