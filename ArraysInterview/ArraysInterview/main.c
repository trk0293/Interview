//
//  main.c
//  Binary search
//
//  Created by raghav on 11/9/18.
//  Copyright © 2018 raghav. All rights reserved.
//

// Time complexity o(n) ; space complexity :o(n)
#include <stdio.h>
#include <stdlib.h>

#define sum 15
#define max 20 // max represent the maximum value in the input array

void numberSum(int* arr,int size)
{
    int i,temp=0;
    int hash[max]={0};
    for(i=0;i<size;i++){
        temp = sum-*(arr+i);
        if(temp == hash[temp] && (temp!=0)) printf("Numbers that add upto %d are at %d,%d\n",sum,i+1,temp);
        hash[*(arr+i)] = *(arr+i);
    }
}

int main(int argc, const char * argv[]) {
    int arr[] = {1,2,3,4,5,6,7,10};
    int size = sizeof(arr)/ sizeof(arr[0]);
    numberSum(arr, size);
    
    return 0;
}
