#include<stdio.h>

int count_char(char *arr,int n){
    int max = 0;
    char ch;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i] == arr[j])
                count++;
        }
        if(max < count){
        ch = arr[i];
        max = count;
        }
    }
    printf("%c occurs ",ch);
    return max;
}

int main(){
    int n ;
    printf("Enter Size of charcter array");
    scanf("%d",&n);
    getchar();
    char arr[n];
    printf("Enter characters : ");
    for(int i=0;i<n;i++){
        scanf("%c",&arr[i]);
        //getchar();
    }
    //getchar();

    printf("%d",count_char(arr,n));

}