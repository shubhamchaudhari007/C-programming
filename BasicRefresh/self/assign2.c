#include<stdio.h>
int main(){
	int n,first_day,num;
	printf("Enetr the value of 'n' : \n");
	scanf("%d",&n);

	if(n>0&&n<=365){
		printf("choose first day:\n1.Sunday\n2.monday\n3.tuesday\n4.wednesday\n5.thursday\n6.friday\n7.saturday\nEnter the option to set the first day : ");
		scanf("%d",&first_day);
		if(first_day>0&&first_day<=7){
			num = ((n+first_day)-1)%7;

			switch(num){
				case 1:
					printf("The day is Sunday");
					break;
				case 2:
					printf("The day is Monday");
					break;
				case 3:
					printf("The day is tuesday");
					break;
				case 4:
					printf("The day is Wednesday");
					break;
				case 5:
					printf("The day is Thursday");
					break;
				case 6:
					printf("The day is friday");
					break;
				case 0:
					printf("The day is Saturday");
					break;
			}
		}else{
			printf("Error: invalid input,first day should be > 0 and <= 365");
		}
	}else{
		printf("Error : invalid input, n value should be > 0 and <= 365");
	}


}

