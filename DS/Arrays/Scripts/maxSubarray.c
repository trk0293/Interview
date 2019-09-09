#include <stdio.h>
#include <stdlib.h>

/* Make sure you handle negative numbers. Input : [-1]. output should be -1 not 0 */

int maxSubArray(int* nums, int numsSize){
    int maxSum=0;int i=0;int sum =0;int greatElement = INT_MIN;
    for(i=0;i<numsSize;i++){
        sum = sum+*(nums+i);
        if(sum < 0)sum=0;
        if(maxSum < sum)maxSum = sum;
        if(*(nums+i) > greatElement) greatElement=*(nums+i); 
    }
    if(maxSum == 0)maxSum = greatElement;
    return maxSum;
}

int main()
{
    int arr[ ] = {-2,1,-3,4,-1,2,1,-5,4};
    int numsSize = 9;
    int maxSum = maxSubArray(arr,numsSize);
    printf("Max Sum : %d \n",maxSum);
    return 0;
}
