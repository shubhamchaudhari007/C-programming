#include<stdio.h>
int main(){
    int n;
    printf("Enter n\n");
    scanf("%d",&n);
    int i = 1;
    int sum = 0;
    while(n > 0){
        if(i%2 == 1){
            //printf("%d",i);
            sum = sum + i;
            n--;
            i++;
        }else{
            i++;
        }
    }
    printf("%d",sum);
}