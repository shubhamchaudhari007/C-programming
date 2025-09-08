#include<stdio.h>

int count1(int num){
    if(num>0)
        return 1+count1(num/10);
    else   
        return 0;
}
// int count1(int num){
//     if(num == 0)
//         return 0;
//     else
//         return 1+count1(num/10);
// }

int main(){
    int num;
    printf("Enter number to find the count : ");
    scanf("%d",&num);

    int count = count1(num);
    printf("total digits in number : %d ",count);

}