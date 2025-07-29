#include<stdio.h>
int main(){
	int count =0;
	int num;

	printf(" ------------------------------------------ \n");
	printf("                QUIZ GAME                   \n");
	printf(" ------------------------------------------ \n");
	
//	printf("\n -------------WELCOME------------------\n");
//	printf("\n");

	printf("Q1. Who is the father of c Language? \n");
	printf(" 1.Steve Jobs \n2. James Gosling \n3. Dennis Ritchie \n4. Rasmus Lerdorf\n");
	scanf("%d",&num);
	if(num == 3)
		count++;
	
	printf("Q2. Which of the following is not a valid C variable name?\n");
	printf(" 1.int number; \n2.float rate; \n3.int variable_count; \n4.int $main;\n");
	scanf("%d",&num);
	if(num == 4)
		count++;
	
	printf("Q3.  All keywords in C are in ____________ \n");
	printf(" 1.LowerCase letters \n2.UpperCase letters \n3.CamelCase letters \n4.None of the mentioned\n");
	scanf("%d",&num);
	if(num == 1)
		count++;

	printf("Q4. Which of the following is true for variable names in C? \n");
	printf(" 1.They can contain alphanumeric characters as well as special characters \n2.It is not an error to declare a variable to be one of the keywords(like goto, static) \n3.Variable names cannot start with a digit \n4.Variable can be of any length\n");
	scanf("%d",&num);
	if(num == 3)
		count++;

	printf("Q5. Which of the following cannot be a variable name in C? \n");
	printf(" 1.volatile \n2.true \n3.friend \n4.export\n");
	scanf("%d",&num);
	if(num == 1)
		count++;

	printf("Q6. What is short int in C programming? \n");
	printf(" 1.The basic data type of C \n2.Qualifier \n3.Short is the qualifier and int is the basic data type \n4.All of the mentioned\n");
	scanf("%d",&num);
	if(num == 2)
		count++;

	printf("Q7. Which keyword is used to prevent any changes in the variable within a C program? \n");
	printf(" 1.immutable \n2.mutable \n3.const \n4.volatile\n");
	scanf("%d",&num);
	if(num == 3)
		count++;

	printf("Your Score is %d out of 7 \n",count);
	printf("Your %% Score is %2.f %%",((float)count/7)*100);

	
}
