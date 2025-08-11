#include<stdio.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
        if(digits[digitsSize - 1] == 9){
            returnSize[digitsSize-1] = 0;
            returnSize[digitsSize-2] += 1;
        }else{
            returnSize[digitsSize-1] += 1;
        }
    return returnSize;
}

int main(){
	int digitsSize = 3;
	int digits[] = {1,2,3};
	int returnSize[] = {1,2,3};

	for(int i=0;i<digitsSize;i++){
		printf("%d ",plusOne(&digits,digitsSize,&returnSize));
	}


}
