//
//  main.c
//  MergeSort
//
//  Created by raghav on 9/7/18.
//  Copyright © 2018 raghav. All rights reserved.
//

#include <stdio.h>

void mergeSort(int* arrPtr,int l,int r);
void merge(int* arrPtr,int l,int m,int r);
void printArray(int A[], int size);

void mergeSort(int* arrPtr,int l,int r){
    int middleIndex = (l+r)/2;
    /* left half */
    if (r==l || r-l==1){
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
    int leftBuffer[leftTemp],rightBuffer[rightTemp];
    for (int i=0;i<leftTemp;i++){
        leftBuffer[i] = duparrPTr[l+i];
    }
    for (int j=0;j<rightTemp;j++){
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

void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main(int argc, const char * argv[]) {
    
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, arr_size - 1);
    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}
