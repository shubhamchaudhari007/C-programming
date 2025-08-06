/*

Description : 

- Read total (n) number of pattern chars in a line (number should be “odd”)

- Read number (m) of pattern char to be printed in the middle of line (“odd” number)

- Print the line with two different pattern chars

- Example – Let's say two types of pattern chars '$' and '*' to be printed in a line. Total number of chars to be printed in a line are 9. Three '*' to be printed in middle of line.

Sample Execution : 

Test case 1 : 

Enter n : 9

Enter m : 3

$$$***$$$

*/

#include<stdio.h>
int main(){
    int n;
    //printf("Enter n : \n");
    scanf("%d",&n);

    int m;
    //printf("Enter m : \n");
    scanf("%d",&m);
    int mid1=n/2+1;
    int mid2=m/2+1;

    for(int i=1;i<=n;i++){
        if((mid1-mid2)<i && (mid1+mid2)>i){
            printf("*");
        }else{
            printf("$");
        }
    }
}
