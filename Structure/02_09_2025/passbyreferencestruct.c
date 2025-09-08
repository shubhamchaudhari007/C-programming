#include<stdio.h>
#include<string.h>

struct student{
    int id;
    char name[50];
    char address[60];

};

void data(struct student *s){
    s->id = 50;
    strcpy(s->name,"omeen");
    printf("structure s1 has id = %d ,Name = %s ,Address = %s\n",s->id,s->name,s->address); 

}

int main(){
    struct student s1 = {101,"shubham","pune"};

    printf("before pass to function call\n");
    printf("structure s1 has id = %d ,Name = %s ,Address = %s\n",s1.id,s1.name,s1.address);

    data(&s1);

    printf("after pass to function call\n");
    printf("structure s1 has id = %d ,Name = %s ,Address = %s\n",s1.id,s1.name,s1.address);
    
}