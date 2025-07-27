#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,r1,r2,d;
	printf("enter value of a,b,c from equation \n a x^2 +b x + c = 0\n");
	scanf("%f %f %f",&a,&b,&c);

	d = b*b-4*a*c;

	if(d==0){
		printf("roots are real and equal\n");
		r1 = -b / 2*a;
		r2 = -b / 2*a;
		printf("roots are root1 = %g , root2 = %g ",r1,r2);
	}else if(d>0){
		printf("roots are real and different\n");
		r1 = (-b+sqrt(d)) / 2*a;
		r2 = (-b-sqrt(d)) / 2*a;
		printf("roots are root1 = %g , root2 = %g ",r1,r2);
	}else{
		printf("roots are imaginary");
	}
		

}
