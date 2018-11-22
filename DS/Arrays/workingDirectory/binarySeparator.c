#include<stdio.h>
#include<stdlib.h>


void binarySeparator( int* arr, int size){
int i,zeroCount,onesCount,j=0;
for(i=0;i<size;i++)*(arr+i)?onesCount++:zeroCount++;
if((zeroCount+onesCount)!=size){ printf("Nice try! now rerun with binaries\n");return;}
for(i=0;i<zeroCount;i++)*(arr+i)=0;
for(j=i;j<size;j++)*(arr+j+1)=1;
for(i=0;i<size;i++)printf("%d ",*(arr+i));
printf("\n");
return;
}

int main(int argc, const char* argv[]){
int *arr,i,size;
//arr = (int*)malloc(sizeof(int)*size);
printf("\nEnter binary elements with spaces between\n");
for(i=0;i<size;i++)scanf("%d",&arr[i]);
size = sizeof(arr)/sizeof(arr[0]);
binarySeparator(arr,size);
return 0;
}
