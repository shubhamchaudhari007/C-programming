/*

Enter the size : 5

Enter the array elements : 1 2 3 4 5

Square is 1 4 9 16 25

Test case 2 :


Enter the size : 5

Enter the array elements : -1 -2 -3 -4 -5

Square is 1 4 9 16 25

*/

#include <stdio.h>
int square(int arr[], int size);

int main()
{
    //
    int n;
    printf("Enter the size : ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter array elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    square(arr,n);
    
    printf("Square is ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int square(int *arr,int size){
    for(int i=0;i<size;i++){
        arr[i] = arr[i]*arr[i];
    }
}