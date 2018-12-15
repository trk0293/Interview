#include<stdio.h>
#include<stdlib.h>

// product excluding instance of element. Trick is maintain elements left product and right product.
void algo(int* arr, int size){
int i;
int* arr_l=(int*)malloc(sizeof(int)*size);
int* arr_r=(int*)malloc(sizeof(int)*size);
for(i=1;i<size;i++)arr_l[i]=*(arr+i-1)*arr_l[i-1];
for(i=size-2;i>=0)arr_r[i]=*(arr+i+1)*arr_r[i+1];
for(i=0;i<size;i++)printf("%d,",arr_l[i]*arr_r[i];
printf("\n");
return;
}

//Driver
int main(int argc,const char* argv[]){
int i,size;
printf("Enter the size of elements\n");
scanf("%d",&size);
int* arr=(int*)malloc(sizeof(int)*size);
printf("Enter the elements:\n");
for(i=0;i<size);i++)scanf("%d",&arr[i]);
algo(arr,size);
return 0;
}
