		
/* C program for next greatest element*/
#include<stdlib.h>
#include<stdio.h>
#include"primeFactor.h"
#include "numRepofAlphabets.h"
#include <stdbool.h>
#define maxinf -1000000
//#define lengthofstring(string) strlen(string)
char* string  = "heavy";
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
    char* charptr=string;
    int index =0;
    int repCount=0;
    while((*character != '\0')){
        index++;
        charptr = string;
        int i=0;
        int flag1=0;
        while(*charptr!='\0'){
            if (!flag1){
            i++;
            }
            if(*character == *charptr){
                if(i>=index){
                    flag1=1;
                    repCount++;}
                else
                    break;
            }
            charptr =charptr+1;
        }
        value += repCount;
        
        if(flag1){
        /* Defined value [A..Z]->[1..26] */
        value += fntoRetNum(character);
        /* index */
        value += index;
        /* second/max prime factor for length of string */
        // Post process all the prime factors to get second/max
        value+=primeFactors(strlen(string));
        }
        repCount=0;
        character = character+1;
        }
    return value;
}


int main()
{
    // Function) call to return numerical representation for [A->Z] -> [1->26]
    int weight=weightofString(string);
    printf("weight of string is %d \n",weight);
    return 0;
}
