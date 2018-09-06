//
//  primeFactor.c
//  Interview
//
//  Created by raghav on 8/28/18.
//  Copyright © 2018 raghav. All rights reserved.
//

#define PredictedMaxFactors 10
#include "primeFactor.h"
int primeFactors(int n,int* primeFactor,int size){
    size = 0;
    //primeFactor=malloc(sizeof(int)*PredictedMaxFactors);
    
    /* divisible by 2 instances */
    while(n%2==0){
        n=n/2;
        *primeFactor = 2;
        primeFactor = primeFactor+1;
        size+=1;
        }
    /* Traverse through [3..sqrt(n)] and check if element is divisble by number. */
    for(int i= 3;i<=sqrt(n);i+=2){
        if(n%i==0){
            n = n%i;
            *primeFactor = i;
            primeFactor = primeFactor+1;
            size+=1;
        }
    }
    if(n>2){
        *primeFactor = n;
        size+=1;
        primeFactor = primeFactor+1;
    }
    
    return size;
}
