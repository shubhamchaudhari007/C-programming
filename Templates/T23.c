/*

Write a program to print the series depending on the following condition

1. if the value is multiplication of 3 - Fizz

2. if the value is multiplication of 5 - Buzz

3. if the value is multiplication of 3 and 5 - FizzBuzz

Print the series from 1 to 100

Sample Output

1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11  ..........  Buzz

*/

#include<stdio.h>
int main(){

    for(int i=1;i<=100;i++){
        if(i%3==0 && i%5==0){
            printf("FizzBuzz ");

        }else
        if(i%5==0){
            printf("Buzz ");
        }else if(i%3==0){
            printf("Fizz ");
        }else{
            printf("%d ",i);
        }
    }
}
