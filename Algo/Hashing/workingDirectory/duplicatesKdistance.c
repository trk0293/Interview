#include<stdio.h>
#include<stdlib.h>
//Assuming maximum value in array is 100

#define maxVal 100

void algo(int* arr, int size, int k){
int i;
int* hashArr =(int*)malloc(sizeof(int)*maxVal);
for(i=0;i<size;i++){
if(*(arr+i) == hashArr[*(arr+i)]){printf("There are duplicates from index %d to %d\n",i,i+k);return;}
if(i>=k)hashArr[*(arr+i-k)]=-1;
else hashArr[*(arr+i)]=*(arr+i);
}
printf("No duplicates \n");
return;
}

//Driver program
int main(int argc, const char* argv[]){
int i,size,k;
printf("edit .c and change maxVal macro to highest value possible in array\n");
printf("Enter the size of the array:\n");
scanf("%d",&size);
printf("Enter scan window \n");
scanf("%d",&k);
printf("Enter elements \n");
int* arr = (int*)malloc(sizeof(int)*size);
for(i=0;i<size;i++)scanf("%d",&arr[i]);
algo(arr,size,k);
return 0;
}
