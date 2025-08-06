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
	int sum1=0,sum2=0;
    
    printf("Enter the array1 elements : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr1[i]);
    }
    
    printf("Enter the array2 elements : ");
    for(int i=0;i<size1;i++){
		scanf("%d",&arr2[i]);
		sum2+=arr2[i];
    }
    
    for(int i=0;i<size;i++){
        for(int j=0;j<size1;j++){
            if(arr1[i] == arr2[j]){
                flag++;
                break;
            }
        }
		sum1+=arr1[i];
    }
    printf("%d\n",flag);
    printf("%d\n",sum1);
    printf("%d\n",sum2);

    if(flag == size && sum1==sum2){
        printf("Array elements are equal");
    }else{
        printf("Array elements are not equal");
    }
    
}
