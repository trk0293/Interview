//
//  main.c
//  Binary search
//
//  Created by raghav on 11/9/18.
//  Copyright © 2018 raghav. All rights reserved.
//

// Time complexity o(nlogn) ; space complexity :o(1)
#include <stdio.h>
#include <stdlib.h>
#include "Mergesort.h"

#define sum 15

void numberSum(int* arr,int size)
{
    int i,l=0;
    int r = size-1;
    for(i=0;i<size;i++){
        if(*(arr+l)+*(arr+r)==sum) printf("The numbers that add upto %d is %d and %d",sum,*(arr+l),*(arr+r));
        else if(*(arr+l)+*(arr+r)<sum)
            l++;
        else r++;
    }
    printf("No matches!");
}

int main(int argc, const char * argv[]) {
    int arr[] = {10,3,2,4,7,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,size-1);
    printArray(arr, size);   // un-comment to validate merge sort logic
    //numberSum(arr, size);
    
    return 0;
}
