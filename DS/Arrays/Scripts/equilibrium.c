#include<stdio.h>
#include<stdlib.h>






char equilibrium(int* arr, int size){
int i;
int* l2r_arr=(int*)malloc(sizeof(int)*size);
int* r2l_arr=(int*)malloc(sizeof(int)*size);
l2r_arr[0]=*(arr);
r2l_arr[size-1]=*(arr+size-1);
for(i=1;i<size;i++)l2r_arr[i]=l2r_arr[i-1]+*(arr+i);
for(i=size-2;i>=0;i--)r2l_arr[i]=r2l_arr[i+1]+*(arr+i);
for(i=0;i<size-1;i++){if(l2r_arr[i]==r2l_arr[i+1]) break; if(i==size-2)return 0;}
printf("equilibrium point is at index %d \n",i+1);
return 1;
}

int main(int argc,const char* argv[]){
int i,size;
printf("enter the size of array :\n");
scanf("%d",&size);
int* arr=(int*)malloc(sizeof(int)*size);
printf("enter the elements :\n");
for(i=0;i<size;i++)scanf("%d",&arr[i]);
char isSuccess=equilibrium(arr,size);
if(!isSuccess)printf("There is no equilibrium point\n");
return 0;
}
