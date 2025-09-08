#include<stdio.h>

struct student{
    char name[100];
    int ID;
};

struct address{
    char address1[100];
    char address2[100];
};

int main(){
    struct student s1;
    printf("Enter details : name and ID\n");
    scanf("%s",s1.name);
    scanf("%d",&s1.ID);

    struct address s1a;
    printf("Enter Address : A1 and A2\n");
    scanf("%s",s1a.address1);
    scanf("%s",s1a.address2);

    printf("%d\n",s1.ID);
    printf("%s\n",s1.name);
    printf("%s\n",s1a.address1);
    printf("%s\n",s1a.address2);
}