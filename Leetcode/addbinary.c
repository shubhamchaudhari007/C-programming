// #include<stdio.h>
// #include<string.h>

// int Binarytodec(char *a){
//     int power = 1;
//     int len = strlen(a)-1;
//     int dec = 0;
//     while(len >= 0){
//         if(a[len] == 49){
//         dec += power * 1;
//         }else{
//             dec += power * 0;
//         }
//         power = power * 2;
//         len--;
//     }
//     return dec;
// }

// int main(){
//     char str1[10];
//     scanf("%s",str1);
//     getchar();
//     char str2[10];
//     scanf("%s",str2);
//     getchar();

//     int dec1 = Binarytodec(str1);
//     int dec2 = Binarytodec(str2);

//     int result = dec1 + dec2;
//     char result1[10];
//     int index = 0,rem;

//     while(result != 0){
//         rem = result%2;
//         if(rem == 1){
//             result1[index] = '1';
//         }else{
//             result1[index] = '0';
//         }
//         index++;
//         result = result/2;
//     }
//     result1[index] = '\0';

//     int k = 0;
//     int j = index-1;
//     while(k < j){
//         int temp = result1[k];
//         result1[k] = result1[j];
//         result1[j] = temp;
//         k++;
//         j--;
//     }
//     printf("%s",result1);
// }

#include <stdio.h>
#include <string.h>
#include<stdlib.h>

char *addBinary(char *a, char *b)

{
    int al = strlen(a);
    int bl = strlen(b);
    int suma = 0;
    for (int i = al - 1; i >= 0; i--)
    {
        if (i == 0 && a[i] == '1')
        {
            suma = 1 + suma;
        }
        else
            suma = 2 * i + suma;
    }
    int sumb = 0;
    for (int i = bl - 1; i >= 0; i--)
    {
        if (i == 0 && b[i] == '1')
        {
            sumb = 1 + sumb;
        }
        else
        {
            sumb = 2 * i + sumb;
        }
    }
    int c = suma + sumb;
    int size = 10;
    char *str = malloc(size*sizeof(char));
    int i = 0;
    while (c > 0)
    {
        str[i] = c % 2 + '0';
        c = c / 2;
        i++;
    }
    str[i] = '\0';
    int s = 0;
    int e = i - 1;
    while(s < e)
    {
        char temp = str[e];
        str[e] = str[s];
        str[s] = temp;
        s++;
        e--;
    }
    printf("%s\n",str);
    return str;
}

int main()
{
    char a[100], b[100];

    printf("Enter first binary number: ");
    scanf("%s", a);

    printf("Enter second binary number: ");
    scanf("%s", b);

    //char *result = addBinary(a, b);

    printf("Sum of binary numbers: %s\n", addBinary(a,b));

    return 0;
}