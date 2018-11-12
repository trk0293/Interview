//
//  Mergesort.c
//  ArraysInterview
//
//  Created by raghav on 11/10/18.
//  Copyright © 2018 raghav. All rights reserved.
//

#include "Mergesort.h"
#include <stdio.h>

void mergeSort(int* arrPtr,int l,int r);
void merge(int* arrPtr,int l,int m,int r);
void printArray(int* arr, int size);

void mergeSort(int* arrPtr,int l,int r){
    int middleIndex = (l+r)/2;
    /* left half */
    if (r==l){
        return;
    }
    mergeSort(arrPtr, l, middleIndex);
    /* right half */
    mergeSort(arrPtr, middleIndex+1, r);
    /* Merge */
    merge(arrPtr,l,middleIndex,r);
    
}

void merge(int* arrPtr,int l,int m,int r){
    
    /* copy values from l <--> m into one array and m+1 t0 r into another array. */
    int leftTemp = m-l+1;
    int rightTemp = r-m;
    int *duparrPTr=arrPtr;
    int i,j=0;
    int leftBuffer[leftTemp],rightBuffer[rightTemp];
    for (i=0;i<leftTemp;i++){
        leftBuffer[i] = duparrPTr[l+i];
    }
    for (j=0;j<rightTemp;j++){
        rightBuffer[j] = duparrPTr[m+1+j];
    }
    
    //Print buffers - for debug
    /*
     printf ("\n");
     for (int i=0; i < leftTemp; i++)
     printf("%d ", leftBuffer[i]);
     printf("\n");
     for (int i=0; i < rightTemp; i++)
     printf("%d ", rightBuffer[i]);
     printf ("\n");
     */
    
    /* Merge into arr with below logic:
     loop
     */
    
    int a=0;int b=0;int c=0;
    
    int arr_index = l;
    
    while(a < leftTemp && b < rightTemp){
        
        if(leftBuffer[a]<rightBuffer[b]){
            arrPtr[arr_index] = leftBuffer[a];
            a++;
            arr_index++;
        }
        else if(leftBuffer[a]>rightBuffer[b]){
            arrPtr[arr_index] = rightBuffer[b];
            b++;
            arr_index++;
        }
        
    }
    while(a < leftTemp){
        arrPtr[arr_index] = leftBuffer[a];
        a++;
        arr_index++;
    }
    while(b < rightTemp){
        arrPtr[arr_index] = rightBuffer[b];
        b++;
        arr_index++;
    }
    
    return;
    
}

void printArray(int* arr, int size)
{
    int i;
    for (i=0; i < size; i++){
        printf(" %d,",*(arr+i));
}
    return;
}
