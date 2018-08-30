
/* C program for next greatest element*/
#include<stdlib.h>
#include<stdio.h>
#include"primeFactor.h"

/* merge function
 This  */
void merge(int* arrPtr,int l,int m,int r){
    
    /* copy values from l <--> m into one array and m+1 t0 r into another array. */
    int leftTemp = m-l+1;
    int rightTemp = r-m;
    int *duparrPTr=arrPtr;
    int leftBuffer[leftTemp],rightBuffer[rightTemp];
    for (int i=0;i<leftTemp;i++){
        leftBuffer[i] = *duparrPTr;
        duparrPTr++;
    }
    for (int j=0;j<rightTemp;j++){
        rightBuffer[j] = *duparrPTr;
        duparrPTr++;
    }
    /* Merge into arr with below logic:
     loop
     */
    int a=0;int b=0;int c=0;
    while(a < leftTemp && b < rightTemp){
        
            if(leftBuffer[a]<rightBuffer[b]){
                *arrPtr = leftBuffer[a];
                a++;
                arrPtr++;
                }
            else if(leftBuffer[a]>rightBuffer[b]){
                *arrPtr = rightBuffer[b];
                b++;
                arrPtr++;
                }
        
    }
        while(a < leftTemp){
        *arrPtr = leftBuffer[a];
        a++;
        arrPtr++;
    }
    while(b < rightTemp){
        *arrPtr = rightBuffer[a];
        b++;
        arrPtr++;
    }
    
}


void mergeSort(int* arrPtr,int l,int r){
    if(l<r){
        int middleIndex = (l+r)/2;
        /* left half */
        mergeSort(arrPtr, l, middleIndex);
        /* right half */
        mergeSort(arrPtr, middleIndex+1, r);
        /* Merge */
        merge(arrPtr,l,middleIndex,r);
        
    }
}
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
int main()
{/* uncomment for testing merge sort.
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, arr_size - 1);
    printf("\nSorted array is \n");
    printArray(arr, arr_size);
  */
  //Driver program to print prime factors for an intezer.
    int testPrimeNumber = 100;
    int size=0;
    int* primeFactor = malloc(sizeof(int)*PredictedMaxFactors);
    size = primeFactors(testPrimeNumber,primeFactor,size);
    while(size>0){
       
        printf("prime factors are : %d \n",*primeFactor);
        primeFactor= primeFactor+1;
        size-=1;
    }
    
    return 0;
}
