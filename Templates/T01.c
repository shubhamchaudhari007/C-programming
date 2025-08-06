/*WAP using Printf & Scanf to print & read basic types

Instructions:
Variables to declare:
char name_letter;
int pincode;
float height;
double latitude, longitude;
Program execution sample:

Enter first letter of your name: M
Enter your Pincode: 560001
Enter your height in feet: 5.8
Enter latitude & longitude of your address: 12.9757   77.6053

Here is what you have entered:
First Letter in Name: M
Pincode: 560001
Height: 5.8 ft
Location: 12.9757   77.6053
Note : Comment the prompting messages 

like printf("enter the number ");

*/

#include<stdio.h>
int main(){
    char name_letter;
    int pincode;
    float height;
    double latitude , longitude;

    printf("Enter first letter of your name : ");
    scanf("%c",&name_letter);
    printf("Enter your pincode : ");
    scanf("%d",&pincode);
    printf("Enter your height in feet : ");
    scanf("%f",&height);
    printf("Enter latitude and longitude of your address : ");
    scanf("%lf %lf",&latitude,&longitude);

    printf("here is what you have entered : \n");
    printf("first letter in name : %c \n", name_letter);
    printf("pincode : %d \n", pincode);
    printf("height : %f \n", height);
    printf("location : %lf %lf \n", latitude,longitude);

    return 0;
}
