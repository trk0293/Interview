#include<stdio.h>
#include<stdlib.h>
#define range 4
void oddNumberCheck(int* arr,int size){
int i=0;
int* indexArr=(int*)malloc(sizeof(int)*range+1);
for(i=0;i<size;i++)indexArr[*(arr+i)]++;
for(i=0;i<=range;i++){if(indexArr[i]%2)break;}
printf("%d has odd frequency\n",i);
return ;
}
int main(int argc, const char* argv[]){
int arr[]={1,2,2,3,3,1,1,4,4,4,1};
int size=0;
size = sizeof(arr)/sizeof(arr[0]);
oddNumberCheck(arr,size);
return 0;
}
