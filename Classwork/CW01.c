/*

You have to read a characer and check it is  upper case, lower case, digit or none.of.above.

Sample Execution : 

Test case 1 : 

Enter the character : A

The character is Upper Case.

Test case 2 :


Enter the character : 5

The character is Digit.

Test case 3 :

Enter the character : !

The character not an alphabet or digit.

*/

#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);

    if(ch>='A'&&ch<='Z'){
        printf("The character is Upper Case.");
    }else if(ch>='a'&&ch<='z'){
        printf("The character is Lower Case.");
    }else if(ch>='0'&&ch<='9'){
        printf("The character is Digit.");
    }else{
        printf("The character not an alphabet or digit.");
    }
}
