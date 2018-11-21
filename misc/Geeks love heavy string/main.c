		
/* C program for next greatest element*/
#include<stdlib.h>
#include<stdio.h>
#include"primeFactor.h"
#include "numRepofAlphabets.h"
#include <stdbool.h>
#define maxinf -1000000
//#define lengthofstring(string) strlen(string)
char* string  = "heavy";

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
