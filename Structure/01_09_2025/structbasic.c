#include<stdio.h>
#include<string.h>
struct student{
    int id;
    char name[10];
    char address[10];
};

struct student s1;

int main(){
    struct student s2;
    s2.id = 10;
    //s2.name = "shubham";  //we can not directly assign values to struct but we can copy our string in struct and store
    strcpy(s2.address , "jamkhed");
    printf("%d",s2.id);
    printf("%s",s2.address);

    struct student *ptr = &s1;
    ptr->id = 20;
    strcpy(ptr -> name , "shubham");
    printf("%s",ptr->name);
}