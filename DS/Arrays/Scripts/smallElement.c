#include<stdio.h>
#include<stdlib.h>

/* Time complexity o(nlogn), comment [25:26] and uncomment [23:24] if you want to call merge sort, attach library to path.*/

void algo(int* arr,int* arr_ind,int size){
int i=0;
int* dup_arr=(int*)malloc(sizeof(int)*size);
for(i=0;i<size;i++){
dup_arr[*(arr_ind+*(arr+i))]=i;
}
for(i=0;i<size;i++)printf("%d,",dup_arr[i]);
return;
}

int main(int argc,const char* argv[]){
int i,size;
printf("enter the size of array : \n");
scanf("%d",&size);
int* arr = (int*)malloc(sizeof(int)*size);
printf("enter elements \n");
for(i=0;i<size;i++)scanf("%d",&arr[i]);
//int* sorted_arr=mergeSort(arr,size);
//int* arr_ind=(int*)malloc(sizeof(int) * *(sorted_arr+size-1));
int sorted_arr[7]={1,3,4,5,7,10,32};
int* arr_ind=(int*)malloc(sizeof(int) * sorted_arr[size-1]);
for(i=0;i<size;i++)arr_ind[arr[i]]=i;
algo(sorted_arr,arr_ind,size);
return 0;
}
