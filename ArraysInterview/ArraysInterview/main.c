//
//  main.c
//  Binary search
//
//  Created by raghav on 11/9/18.
//  Copyright © 2018 raghav. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define Key 10

void binarySearch(int* arr,int l,int r){
    if(l==r | r>l){
    if(*(arr+(l+r)/2) == Key)
        printf("key found at index:%d \n",(l+r)/2); 
    else if(*(arr+(l+r)/2)>Key)
        binarySearch(arr,l,(l+r/2));
    else
        binarySearch(arr,(l+r)/2,r);
    }
    
}

int main(int argc, const char * argv[]) {
    int arr[] = {1,2,3,4,5,6,7,10};
    int n = sizeof(arr)/ sizeof(arr[0]);
    binarySearch(arr, 0,n);
    //printf("Key is at index %d in array\n",linearSearch(arr, sizeof(arr)));
    return 0;
}
