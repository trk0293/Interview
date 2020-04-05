#include <stdio.h>


int maxSubArray(int* nums, int numsSize){
    int m_s = *(nums);
    int c_s = *(nums);
    int l_i = 0;
    int r_i;
    int max_l_i,max_r_i;
    for(r_i=1;r_i<numsSize;r_i++){
        if(*(nums+r_i) > c_s && (c_s < 0) ){
            l_i = r_i;
            c_s = *(nums+l_i);
            if(c_s>m_s) m_s=c_s;
            max_l_i = l_i;
            max_r_i = r_i;
            continue;
        }
        c_s = c_s + *(nums+r_i);
        if(c_s > m_s){
            m_s = c_s;
            max_l_i = l_i;
            max_r_i = r_i;
        }
    }
return m_s;
}

int main()
{
    int temp;
/*   
int nums[2] = {-1,-2};
  temp = maxSubArray(nums,2);
*/
int nums[9] = {-1,-1,-2,-2};
temp = maxSubArray(nums,4);  
 
 /*
int nums[9] = {-2,1,-3,4,-1,2,1,-5,4};
temp = maxSubArray(nums,9);
*/
/*
int nums[5] = {8,-19,5,-4,20};
temp = maxSubArray(nums,5);
*/
  printf("%d",temp);
    return 0;
}
