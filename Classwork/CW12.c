/*

WAP to Remove duplicates in an array

Comment the prompting messages printf statements.

Ex: //printf("Enter the number:\n");


Instructions :-
Create array arr of user defined size
Read array elements and store in arr
Create a new array named uniq_array of same size
Implement code to copy only unique values (non duplicate values) into uniq_array
Print uniq_array
Sample Execution:-

Case 1:

Enter array size: 11

Enter array elements: 2 2 1 9 5 8 8 8 20 2 1

Unique array elements: 2 1 9 5 8 20

Case 2:

Enter array size: 5

Enter array elements: 7 1 4 1 4

Unique array elements: 7 1 4

*/


#include<stdio.h>
int main(){
    int size,count = 0;
    //printf("Enter array size : ");
    scanf("%d",&size);

    int arr[size];
    int unique_arr[size];
    //printf("Enter array elements : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    unique_arr[0] = arr[0];
    count = 1;
    for(int i=1;i<size;i++){
        int flag = 0;
        for(int j=0;j<count;j++){
            if(arr[i] == unique_arr[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            unique_arr[count] = arr[i];
            count++;
        }
    }

    printf("Unique array elements : ");
    for(int i=0;i<count;i++){
        printf("%d ",unique_arr[i]);
    }

}
