/*

Description : 

You have to print the below pattern.

Sample Execution : 

Test case 1 : 

Enter n : 4

      *

    * * *

  * * * * *

* * * * * * *

*/

#include<stdio.h>
int main(){
    int rows;
    //printf("Enter n : ");
    scanf("%d",&rows);

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows-i;j++){
            printf(" ");
        }
        for(int k=1;k<=(2*i-1);k++){
            printf("*");
        }
        printf("\n");
    }
}
