/*

WAP to print the elements of the array using pointer

Note: Take the array as int arr[5] = {10, 20, 30, 40, 50};

Output: Array's elements are

10

20

30

40

50

*/

#include<stdio.h>
int main(){
    int arr[5] = {10,20,30,40,50};
    
    printf("Array's elements are \n");
    for(int i=0;i<5;i++){
        printf("%d\n",*(arr+i));
    }
}