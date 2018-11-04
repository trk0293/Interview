//
//  main.c
//  To test weather a number is prime or not.
//
//  Created by raghav on 10/19/18.
//  Copyright © 2018 raghav. All rights reserved.
//



#include <stdio.h>

void isPrime(int n){
    int flag = 0;
    int i =2;
    while(i<=n/2){
        if(n%i == 0)
            flag = 1;
        i++;
    }
    if(flag == 0)
        printf("%d is a prime number \n",n);
    else
        printf("%d is not a prime number \n",n);
}

int main(int argc, const char * argv[]) {
    int n=0;
    printf("enter a positive number:");
    scanf("%d",&n);
    isPrime(n);
    return 0;
}
