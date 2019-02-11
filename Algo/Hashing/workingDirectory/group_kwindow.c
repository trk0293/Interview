#include<stdio.h>
#include<stdlib.h>

#define maxVal 10

void* algo(int* arr,int size,int k){
int i,count;
count=0;
int* hashArr = (int*)malloc(sizeof(int)*maxVal);
memset(hashArr,-1,maxVal*sizeof(int));
for(i=0;i<k-1;i++){
if(hashArr[*arr+i]==-1)count++;
hashArr[*arr+i]++;
}
printf("%d-",count);
for(i=k;i<size;i++){
if(hashArr[*(arr+(i-k))]==0)count--;
if(hashArr[*(arr+i))]==-1 count++;
hashArr[*(arr+i]]++;
printf("%d-",count);
}
}




//Driver program

int main(int argc,const char* argv){
int i,size,k;
printf("edit .c to change maximum value in input\n");
printf("Enter size\n");
scanf("%d",&size);
printf("Enter window size\n");
scanf("%d"&k);
printf("Enter elements :\n");
int* arr =(int*)malloc(sizeof(int)*size);
for(i=0;i<size;i++)scanf("%d",&arr[i]);
algo(arr,size,k);
return 0;
}
