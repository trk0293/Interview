//
//  main.c
//
//  Created by raghav on 11/9/18.
//  Copyright © 2018 raghav. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <Mergesort.h>
int main(int argc, const char * argv[]) {
	int arr[]={2,1};
	int size = sizeof(arr)/sizeof(arr[0]);
	mergeSort(arr,0,size-1);
	printArray(arr,size);
    
    return 0;
}