#include<stdio.h>
#include<stdlib.h>



void algo (int* set1,int* set2,int size1,int size2){
int i;
int* hashArr=(int*)malloc(sizeof(int)*size1);
for(i=0;i<set1;i++)hashArr[i]=*(set1+i);
for(i=0;i<size2&&*(set2+i)!=hashArr[i];i++);
if(i!=size2)printf("disjointed sets man!\n");
return;
}

//Driver program 
int main(int argc, const char* argv[]){
int i,size1,size2;
printf("Enter size of set 1 : \n");
scanf("%d",&size1);
int* set1 =(int*)malloc(sizeof(int)*size1);
printf("Enter size of set2 :\n");
scanf("%d",&size2);
printf("Enter elements of first set :\n");
for(i=0;i<size1;i++)scanf("%d",&set1[i]);
printf("Enter elements of second set :\n");
for(i=0;i<size2;i++)scanf("%d",&set2[i]);
algo(set1,set2,size1,size2);
return 0;
}
