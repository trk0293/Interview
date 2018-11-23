//
//  primeFactor.c
//  Interview
//
//  Created by raghav on 8/28/18.
//  Copyright © 2018 raghav. All rights reserved.
//

#define PredictedMaxFactors 1000
#include "primeFactor.h"
int primeFactors(int n){
    
    int primenumbers[PredictedMaxFactors];
    int j=0;
    /* divisible by 2 instances */
    while(n%2==0){
        n=n/2;
        primenumbers[j] = 2;j++;
        }
    /* Traverse through [3..sqrt(n)] and check if element is divisble by number. */
    for(int i= 3;i<=sqrt(n);i+=2){
        if(n%i==0){
            n = n%i;
            primenumbers[j] = i;j++;
        }
    }
    if(n>2){
        primenumbers[j] = n;
        
    }
    return primenumbers[j];
}

