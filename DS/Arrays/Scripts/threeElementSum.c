#include<stdio.h>
#include<stdlib.h>



void threeElemSum(int* arr, int size, int SUM){
int i,j,k,foundFlag=0;
for(i=0;i<size && foundFlag ==0;i++){
for(j=i+1;j<size && foundFlag ==0;j++){
for(k=j+1;k<size && foundFlag ==0;k++){
if(*(arr+i)+*(arr+j)+*(arr+k)==SUM) foundFlag=1;
}
}
}
printf("Three elements are %d, %d and %d \n",*(arr+i-1),*(arr+j-1),*(arr+k-1));
return;
}



int main(int argc, const char* argv[]){
int i,size,SUM;
printf("Enter the target SUM : \n");
scanf("%d",&SUM);
printf("enter the size of elements :\n");
scanf("%d",&size);
int* arr=(int*)malloc(sizeof(int)*size);
printf("enter elements:\n");
for(i=0;i<size;i++)scanf("%d",&arr[i]);
threeElemSum(arr,size,SUM);
return 0;
}
