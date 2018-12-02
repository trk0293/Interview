#include<stdio.h>
#include<stdlib.h>

void threeElement(int* arr,int size, int SUM){
int i,completeFlag,const_ind,l_ind,r_ind,Const=0;
for(const_ind=0;const_ind<size-2&&completeFlag==0;const_ind++){
Const = *(arr+const_ind);
l_ind=const_ind+1;
r_ind=size-1;
while((l_ind<r_ind)&&!completeFlag){
if(Const+*(arr+l_ind)+*(arr+r_ind)==SUM)completeFlag=1;
else if(Const+*(arr+l_ind)+*(arr+r_ind)>SUM)r_ind--;
else l_ind++;
}
}
printf("Three elements are %d, %d and %d\n",Const,*(arr+l_ind),*(arr+r_ind));
return;
}





int main(int argc, const char* argv[]){
int i,size,SUM;
printf("enter the size of the array :\n");
scanf("%d",&size);
printf("enter the target element \n");
scanf("%d",&SUM);
printf("enter the elements :\n");
int* arr=(int*)malloc(sizeof(int)*size);
for(i=0;i<size;i++)scanf("%d",&arr[i]);
threeElement(arr,size,SUM);
return 0;
}
