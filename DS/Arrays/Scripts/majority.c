//
//  main.c
// Script to find the majority in Array.
//  Created by raghav on 11/9/18.
//  Copyright © 2018 raghav. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <Mergesort.h>
void majority(int* arr,int size){
	int i=0;
	for(i=0;i<=size/2;i++)
	if(*(arr+i)==*(arr+i+(size/2))) printf("Majority element in the array is %d \n",*(arr+i));
	return;
}
/*
int main(int argc, const char * argv[]) {
	int arr[]={1,2,2,2,2,3,4};
	int size = sizeof(arr)/sizeof(arr[0]);
	//mergeSort(arr,0,size-1);
	//printArray(arr,size);
	majority(arr,size);
    
    return 0;
}
*/
