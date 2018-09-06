
/* C program for next greatest element*/
#include<stdlib.h>
#include<stdio.h>
#include"primeFactor.h"
#include "numRepofAlphabets.h"
#define maxinf -1000000
//#define lengthofstring(string) strlen(string)
char* string  = "strings";
int postPrimefactor(int* primeFactor, int size);
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
int weightofString(char* character){
    int value =0;
    char* charptr;
    int repeatCount=0;
    int index =0;
    int size=0;
    int max=0;
    int dupArray[strlen(string)];
    int* primeFactor = malloc(sizeof(int)*PredictedMaxFactors);
    while(*character != '\0'){
        repeatCount =0;

        /* Duplicates of the same string */
        charptr = string;
        while(*charptr!='\0'){
            if(*character == *charptr){
                repeatCount++;
                if(repeatCount>1)
                {   dupArray[index] = *character;
                    break;
                }
            }
            charptr=charptr+1;
        }
        index++;
        // increase the character count
        character=character+1;
        for(int j=index+1;j<=strlen(string);j++){
            if ((*character == dupArray[j]&&(*(character+1)=='\0'))){
                return value;
            }
            if(*character == dupArray[j]){
                break;
            }
        }
        /* Defined value [A..Z]->[1..26] */
        value += fntoRetNum(character);
        value += repeatCount-1;
        /* index */
        value += index;
        /* second/max prime factor for length of string */
        // Post process all the prime factors to get second/max
        size = primeFactors(strlen(string),primeFactor,size);
        int prime= postPrimefactor(primeFactor, size);
        value=value+prime;
        }
    return value;
}
int postPrimefactor(int* primeFactor, int size){
    int first,second =maxinf;
    int prime = 0;
    for(int i=0;i<size;i++){
        if(*primeFactor > first){
            second = first;
            first = *primeFactor;
            primeFactor=primeFactor+1;
        }
        else if(*primeFactor >second){
            second =*primeFactor;
            primeFactor = primeFactor+1;
        }
        else
            primeFactor=primeFactor+1;
    }
    if(second !=maxinf && second >=0)
        prime += second;
    else if(first !=maxinf && first >=0)
        prime+=first;
    else
        printf("No prime factors.check primeFactors Fn");
    return prime;
}
int main()
{/* uncomment for testing merge sort.
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, arr_size - 1);
    printf("\nSorted array is \n");
    printArray(arr, arr_size);
  */
  /*
    //Driver program to print prime factors for an intezer.
    int testPrimeNumber = 100;
    int size=0;
    int* primeFactor = malloc(sizeof(int)*PredictedMaxFactors);
    size = primeFactors(testPrimeNumber,primeFactor,size);
    /*unit test to print the prime factors
    while(size>0){
       
        printf("prime factors are : %d \n",*primeFactor);
        primeFactor= primeFactor+1;
        size-=1;
    }
    */
    
    // Function call to return numerical representation for [A->Z] -> [1->26]
    int weight=weightofString(string);
    printf("weight of string is %d \n",weight);

    return 0;
}
