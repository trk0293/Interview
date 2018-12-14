#include<stdio.h>
#include<stdlib.h>

void algo(int* arr, int size, int target){
int i,sum,l_ptr,flag=0;
for(i=0;i<size && flag ==0;i++){
sum+=*(arr+i);
if(sum==target)break;
if(sum>target){
while(l_ptr<i && flag ==0){
sum-=*(arr+l_ptr);
l_ptr++;
if(sum==target)flag=1;
}
}
}
//printf("%d,%d\n",l_ptr+1,i);
return;
}


int main(int argc, const char* argv[]){
int i,size,target=0;
printf("enter the size of the elements \n");
scanf("%d",&size);
int* arr = (int*)malloc(sizeof(int)*size);
printf("enter the elements\n");
for(i=0;i<size;i++)scanf("%d",&arr[i]);
printf("Enter the target number\n");
scanf("%d",&target);
algo(arr,size,target);
return 0;
}
