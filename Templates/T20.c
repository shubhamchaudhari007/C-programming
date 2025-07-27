/*

WAP to check whether character is Upper case, Lower case, Digit, or None of the above

Using Switch Case Range (...)

Instructions:

Prompt the user to enter a character.
Check whether the character is :
Upper case: A-Z
Lower case: a-z
Digit: 0-9
None of the above
Comment the prompting messages printf statements.

Ex: //printf("Enter the number:\n");


Program execution sample:

Sample Output 1:
Enter a character: A
Character is Uppercase
Sample Output 2:
Enter a character: d
Character is Lowercase
Sample Output 3:
Enter a character: 5
Character is a digit
Sample Output 4:
Enter a character: &
Not an alphabet or digit
Sample Output 5:
Enter a character: z
Character is Lowercase

*/

#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    switch(ch){
        case 'A'...'Z':
            printf("Character is Uppercase");
            break;
        case 'a'...'z':
            printf("Character is Lowercase");
            break;
        case '0'...'9':
            printf("Character is a digit");
            break;
        default:
            printf("Not an alphabet or digit");
            break;
    }
}
