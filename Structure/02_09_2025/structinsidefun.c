#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student{
    int id;
    char *name;
    char *address;

};

struct student data(){
    struct student s;
    s.name = (char*)malloc(30*sizeof(char));
    s.address = (char*)malloc(60*sizeof(char));
    s.id = 50;
    s.name = "shubham";
    s.address = "pune";
    return s;

}

int main(){
    struct student s1 ;
    s1 = data();
    s1.name = "omeen";
    printf("structure s1 has id = %d ,Name = %s ,Address = %s\n",s1.id,s1.name,s1.address);

    
}