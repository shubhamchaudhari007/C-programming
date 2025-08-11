/*

WAF to modify the value of a variable.

Eg:

Enter the number : 10

After modifying, num is 15

*/

#include<stdio.h>
void fun(int *ptr){

    *ptr = *ptr+5;

}
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    int *ptr = &num;
    fun(ptr);

    printf("After modifying, num is %d",num);
}
