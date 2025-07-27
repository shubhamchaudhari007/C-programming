#include<stdio.h>
int main(){
	int A,R,N;
	printf("Enter the first number 'A':");
	scanf("%d",&A);
	printf("Enter the common difference / ratio 'R':");
	scanf("%d",&R);
	printf("Enter the number of terms 'N':");
	scanf("%d",&N);
	int hp = A;
	int sum = A;
	int multi = A;

	printf("AP = ");
	for(int i=1;i<=N;i++){
		printf("%d, ",sum);
		sum = sum+R;
	}

	printf("\nGP = ");
	for(int i=1;i<=N;i++){
		printf("%d, ",multi);
		multi = multi * R;
	}

	printf("\nHP = ");
	for(int i=1;i<=N;i++){
		printf("%f, ",(float)1/hp);
		hp = hp + R;
	}

}
