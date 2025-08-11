/*

WAP to check if the number is prime using a function. Print the result in the main function.

Eg1:

Enter a number : 10

10 is not a prime number

Enter a number: 23

23 is a prime number

*/

#include<stdio.h>
int isprime(int n){
    int count = 0;
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            count++;
            break;
        }
    }
    if(count == 0){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    if(isprime(num)){
        printf("%d is a prime number",num);
    }else{
        printf("%d is not a prime number",num);
    }

}
