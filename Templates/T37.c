/*

Copy odd and even elements into two separate arrays


Comment the prompting messages printf statements.

Ex: //printf("Enter the number:\n");


Instructions :-

Create array arr of user defined size
Read array elements and store in arr
Create odd_array and even_array of the same size as arr
Implement code to copy odd number to odd_array and even numbers to even_array
Print odd_array and even_array separately
Sample Execution:-

Case 1:

Enter array size: 5
Enter array elements: 1 2 3 4 5
Odd array elements: 1 3 5
Even array elements: 2 4

*/

#include<stdio.h>
int main(){
    int num,j=0,k=0;
    //printf("Enter array size: ");
    scanf("%d",&num);

    int arr[num];
    int arr1[num];
    int arr2[num];

    //printf("Enter array elements: ");
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);

    }

    for(int i=0;i<num;i++){

        if(arr[i]%2==0){

            arr1[j]=arr[i];
            j++;
        }else{
            arr2[k]=arr[i];
            k++;
        }
    }
    printf("Odd array elements: ");
     for(int i=0;i<k;i++){
        printf("%d ",arr2[i]);
    }
    printf("\nEven array elements :");
    for(int i=0;i<j;i++){
        printf("%d ",arr1[i]);
    }

}
