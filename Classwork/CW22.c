/*

Description : 

You have to read a number from user and find the square and cube of a number.

Sample Execution : 

Test case 1 : 

Enter the number : 2

Square is 4

Cube is 8

Test case 2 :


Enter the number : 3

Square is 9

Cube is 27

*/

#include<stdio.h>

void Square(int n,int *sq){
    *sq = n*n;
}

void Cube(int n,int *cu){
    *cu = n*n*n;
}

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int squar,cub;
    Square(num,&squar);
    Cube(num,&cub);
    printf("Square is %d",squar);
    
    printf("\nCube is %d",cub);
}