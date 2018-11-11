//
//  Mergesort.h
//  ArraysInterview
//
//  Created by raghav on 11/10/18.
//  Copyright © 2018 raghav. All rights reserved.
//

#ifndef Mergesort_h
#define Mergesort_h

#include <stdio.h>
/* To sort an array, call mergesort fn with parameters integer array pointer , start index of array(0), end index(size)*/
void mergeSort(int* arrPtr,int l,int r);
void merge(int* arrPtr,int l,int m,int r);
void printArray(int* arr, int size);
#endif /* Mergesort_h */
