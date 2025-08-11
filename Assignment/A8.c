/*

Description:

In probability theory and statistics, a median is described as the number separating the higher half of a sample, a population, or a probability distribution, from the lower half. The median of a finite list of numbers can be found by arranging all the numbers from lowest value to highest value and picking the middle one.
Example:
 For getting the median of input array { 12, 11, 15, 10, 20 }, first sort the array. We get { 10, 11, 12, 15, 20 } after sorting. Median is the middle element of the sorted array which is 12.
Pr-requisites:-

Loops
Arrays
Objective: -

To understand the concept of One-dimensional Arrays
Inputs: -

 

2 Integer Array of size 'M' and 'N' elements.
 

Sample execution: -
Test Case 1: 

Enter the 'n' value for Array A: 5
Enter the 'n' value for Array B: 5

Enter the elements one by one for Array A: 3 2 8 5 4
Enter the elements one by one for Array B: 12 3 7 8 5

Median of array1 : 4
Median of array2 : 7
Median of both arrays : 5.5                         
Test Case 2:
Enter the 'n' value for Array A: 5
Enter the 'n' value for Array B: 4
Enter the elements one by one for Array A: 3 2 8 5 4
Enter the elements one by one for Array B: 12 13 7 5
Median of array1 : 4
Median of array2 : 9.5                                      
Median of both arrays : 6.75    

*/

/*
Name        : Shubham Sanjay Chaudhari
Date        : 01/08/2025
Description : Write a program to calculate the median of an array1 and array2 given by user and calculate the median
              of both arrays also.
I/O         : Input -
                    Enter the 'n' value for Array A: 4
                    Enter the 'n' value for Array B: 4
                    Enter the elements one by one for Array A: 1 2 6 4
                    Enter the elements one by one for Array B: 6 5 4 3
              Output -
                    Median of array1 : 3
                    Median of array2 : 4.5
                    Median of both arrays : 3.75
*/


#include<stdio.h>
int main(){
    int size1,size2,mid0,mid1,mid2,mid3;
    float median1,median2,median3;
    printf("Enter the 'n' value for Array A: ");
    scanf("%d",&size1);
    printf("Enter the 'n' value for Array B: ");
    scanf("%d",&size2);

    int arr1[size1];
    int arr2[size2];
    printf("Enter elements one by one for array A: ");
    for(int i=0;i<size1;i++){
        scanf("%d",&arr1[i]);
    }

    printf("Enter elements one by one for array B: ");
    for(int i=0;i<size2;i++){
        scanf("%d",&arr2[i]);
    }

    for(int i=0;i<size1;i++){                       //logic to sort the array1
        for(int j=0;j<size1-1;j++){                 //inner loop to compare the elements of array
            if(arr1[j]>arr1[j+1]){                  //if larger element is left side then swap
                int temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
        }

    }

    for(int i=0;i<size2;i++){
        for(int j=0;j<size2-1;j++){
            if(arr2[j]>arr2[j+1]){
                int temp = arr2[j];
                arr2[j] = arr2[j+1];
                arr2[j+1] = temp;
            }
        }

    }

    if(size1 % 2 == 0){                                 //size is even then the if condition will be execute
        mid0 = (size1/2);                               //two mid are found and then find the median
        mid1 = (size1/2)-1;
        median1 =(float)(arr1[mid0] + arr1[mid1])/2;    //median of mid1+mid2/2
        printf("median of array1 : %g\n",median1);

    }else{
        mid0 = size1/2;                                 //size is odd then the else part will be execute
        median1 = (float)arr1[mid0];                    //median will be calculated
        printf("median of array1 : %g\n",median1);

    }


     if(size2 % 2 == 0){
        mid2 = (size2/2);
        mid3 = (size2/2)-1;
        median2 =(float) (arr2[mid2] + arr2[mid3])/2;
        printf("Median of array2 : %g \n",median2);
    }else{
        mid2 = size2/2;
        median2 =(float) arr2[mid2];
        printf("Median of array2 : %g \n",median2);
    }

    median3 = (median1 + median2)/2;                    //median of both array can be calculated by adding two medians of arays and divide by 2
    printf("Median of both arrays : %g ",median3);

}
