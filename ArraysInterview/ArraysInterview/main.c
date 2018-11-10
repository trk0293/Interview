//
//  main.c
//  Binary search
//
//  Created by raghav on 11/9/18.
//  Copyright © 2018 raghav. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define sum 10

void numbersSum(int* arr,int size){
    int i,j=0;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if (*(arr+i)+*(arr+j)==sum)
                printf("Numbers that add up to sum are at index %d and %d \n",i+1,j+1); // assuming 0 == 1
        }
    }
}

int main(int argc, const char * argv[]) {
    int arr[] = {1,2,3,4,5,6,7,10};
    int size = sizeof(arr)/ sizeof(arr[0]);
    numbersSum(arr, size);
    //printf("Key is at index %d in array\n",linearSearch(arr, sizeof(arr)));
    return 0;
}
