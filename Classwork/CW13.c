/*

Description : 

– Take equal size arrays 

– Arrays shall have unique values stored in random order 

– Array elements shall be entered by user 

– Arrays are compared “EQUAL” if there is one to one mapping of array elements value 

– Print final result “EQUAL” or “NOT EQUAL”

Sample Execution : 

Test case 1 : 

Enter the array1 size : 3

Enter the array2 size : 3

Enter the array1 elements : 2 -50 17

Enter the array2 elements : 17 2 -50

Array elements are equal.

Test case 2 :


Enter the array1 size : 4

Enter the array2 size : 4

Enter the array1 elements : 1 2 3 4

Enter the array2 elements : 3 4 1 5 

Array elements are not equal.

*/

#include<stdio.h>
int main(){
    int size, flag = 0;
    printf("Enter the array1 size : ");
    scanf("%d",&size);
    int size1;
    printf("Enter the array2 size : ");
    scanf("%d",&size1);

    int arr1[size];
    int arr2[size1];

    printf("Enter the array1 elements : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr1[i]);
    }

    printf("Enter the array2 elements : ");
    for(int i=0;i<size1;i++){
    scanf("%d",&arr2[i]);
    }

    for(int i=0;i<size;i++){
        for(int j=0;j<size1;j++){
            if(arr1[i] == arr2[j]){
                flag++;
                break;
            }
        }
    }

    if(flag == size){
        printf("Array elements are equal");
    }else{
        printf("Array elements are not equal");
    }

}
