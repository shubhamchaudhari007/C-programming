/*

WAP to Print Simple Triangle Digits Pattern

Comment the prompting messages printf statements.

Ex: //printf("Enter the number:\n");

Program execution sample:

Sample Output 1:
Enter max lines: 4

A
B C
D E F
G H I J

Enter max lines: 6

A
B C
D E F
G H I J
K L M N O
P Q R S T U

*/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    char ch = 'A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}
