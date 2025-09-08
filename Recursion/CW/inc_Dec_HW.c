#include<stdio.h>
void incdec(int n){
    if(n==0)
    return ;
    printf("%d\n",n);
    incdec(n-1);
    printf("%d\n",n);
}
int main(){
    int n;
    printf("Enter num : ");
    scanf("%d",&n);

    incdec(n);

}