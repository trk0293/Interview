//
//  main.c
//  Linear search
//
//  Created by raghav on 11/9/18.
//  Copyright © 2018 raghav. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define Key 10
int linearSearch(int* arr,int size){
    int i;
    for(i=0;i<size;i++){
            if(*(arr+i)==Key)
                return i;
    }
    printf("Key is not in array");
    return -1;
}


int main(int argc, const char * argv[]) {
    int arr[] = {1,2,3,4,10,5,6,7};
    printf("Key is at index %d in array\n",linearSearch(arr, sizeof(arr)));
    return 0;
}
